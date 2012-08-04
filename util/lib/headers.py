"""
headers.py
Description: State machines for parsing various elements out of header files.
Author: Charles Grunwald (Juntalis) <ch@rles.grunwald.me>

This program is free software. It comes without any warranty, to
the extent permitted by applicable law. You can redistribute it
and/or modify it under the terms of the Do What The Fuck You Want
To Public License, Version 2, as published by Sam Hocevar. See
http://sam.zoy.org/wtfpl/COPYING for more details.
"""
import fsm
from prototypes import *
from common import ws, nl, indents

__all__ = [ 'parse_declarations', 'extract_preprocessor' ]

# Global variables to define our current context.
typemap = {
	'PythonDynLoad_Func' : ('Func', FuncPrototype),
	'PythonDynLoad_Data' : ('Data', DataPrototype),
	'PythonDynLoad_ModInit' : ('Func', FuncPrototype)
}


# Common State Machine Actions
def accumulate(fsm):
	"""Action: add current symbol to last token in list."""
	fsm.memory[-1] = fsm.memory[-1] + fsm.input_symbol

def start_empty_token(fsm):
	"""Action: start a new token."""
	if len(fsm.memory) > 0:
		if fsm.memory[-1] != '':
			fsm.memory.append('')
	else:
		fsm.memory.append('')

def start_token(fsm):
	"""Action: start a new token and accumulate."""
	start_empty_token(fsm)
	accumulate(fsm)

def accumulate_last(fsm):
	"""Action: accumulate and start new token."""
	accumulate(fsm)
	start_empty_token(fsm)

def error(fsm):
	"""Action: handle uncovered transition (should never happen)."""
	print 'Unhandled transition:', (fsm.input_symbol, fsm.current_state)
	accumulate(fsm)

def open_scope(fsm):
	""" Increment the State Machine's scope level """
	fsm.scope_level += 1

def close_scope(fsm):
	""" Decrement the State Machine's scope level """
	fsm.scope_level -= 1

def open_scope_accumulate(fsm):
	""" Increment the level and append to buffer. """
	open_scope(fsm)
	accumulate(fsm)

def close_scope_accumulate(fsm):
	""" Decrement the level and append to buffer. """
	close_scope(fsm)
	accumulate(fsm)

def check_scope(fsm):
	""" Same as  close_scope_accumulate, but without the accumulate. """
	if fsm.scope_level > 0:
		fsm.next_state = fsm.current_state
		return False
	return True

# State Machines

def parse_declarations(lines):
	""" Given some preprocessed header content, generate our prototype classes. """

	def add_to_type(fsm):
		""" Add the input symbol to the type declaration. """
		fsm.results[-1].rettype += fsm.input_symbol

	def close_scope_accumulate_check(fsm):
		""" Decrement the level and check if we're done. """
		close_scope(fsm)
		result = check_scope(fsm)
		if not result: accumulate(fsm)
		return result

	def begin_prototype(fsm):
		""" Construct a new prototype based on our typemap. """
		global typemap
		start_empty_token(fsm)
		proto = None
		for k in typemap.keys():
			if fsm.memory[0] == k:
				proto = typemap[k][1](decltype=typemap[k][0])
				fsm.results.append(proto)
				break
		if proto is None:
			fsm.next_state = 'not_exported'

	def set_type(fsm):
		""" If we're returning the a scope_level of 0, set the type. """
		if close_scope_accumulate_check(fsm):
			fsm.results[-1].rettype = fsm.memory[1]

	def set_name(fsm):
		""" Set the prototype name. """
		if len(fsm.memory) < 3:
			raise Exception('Should not be here.')
		fsm.results[-1].name = fsm.memory[2]

	def set_args(fsm):
		""" Set the function prototype args. """
		fsm.results[-1].args = fsm.memory[3]

	def set_func_name(fsm):
		""" Set the function prototype name. """
		set_name(fsm)
		start_empty_token(fsm)

	def duplicate_current(fsm):
		""" Duplicate the current prototype into a new entry. For variable
		    declarations consisting of multiple variable names with commas
		    to separate. """
		set_name(fsm)
		begin_prototype(fsm)
		fsm.results[-1].rettype = fsm.memory[1]
		del fsm.memory[2]

	def reset_fsm(fsm):
		""" Reset the context to begin a new declaration. """
		fsm.clear_context()
		del fsm.memory[:]
		fsm.memory[:].append('')

	def handled_success(fsm):
		""" When we've successfully identified a prototyped a declaration,
		   store the ending index and starting index for later removal from our
		   buffer. """
		fsm.results[-1].start_index = fsm.initial_index + 1
		fsm.results[-1].end_index = fsm.index + 1

	def check_declaration(fsm):
		""" Check if the current declaration indicates an exported variable/function. """
		if len(fsm.memory) and len(fsm.memory[-1]) > 0:
			if fsm.memory[-1].startswith('PythonDynLoad_'):
				start_empty_token(fsm)
			else:
				fsm.next_state = 'not_exported'
		else:
			start_empty_token(fsm)
			fsm.initial_index = fsm.index

	def end_func_decl(fsm):
		""" Finish our function prototype if we're returning to scope zero """
		if close_scope_accumulate_check(fsm):
			set_args(fsm)

	def end_data_decl(fsm):
		""" Set the name of our variable and flag the handling as successful. """
		set_name(fsm)
		handled_success(fsm)

	f = fsm.FSM('init', [''], [])
	f.set_default_transition(error, 'init')

	# default
	f.add_transition_list(ws, 'init', check_declaration, 'init')
	f.add_transition('(', 'init', begin_prototype, 'type')
	f.add_transition(';', 'init', None, 'done')
	f.add_transition_any('init', accumulate, 'init')

	# Type declaration.
	f.add_transition('(', 'type', open_scope_accumulate, 'type')
	f.add_transition(')', 'type', set_type, 'prename')
	f.add_transition_list(ws, 'type', accumulate, 'type')
	f.add_transition_any('type', accumulate, 'type')

	# The whitespace before the variable/function name declaration.
	f.add_transition('*', 'prename', add_to_type, 'prename')
	f.add_transition_list(ws, 'prename', None, 'prename')
	f.add_transition_any('prename', start_token, 'name')

	# Name Declaration
	f.add_transition('*', 'name', add_to_type, 'name')
	f.add_transition(',', 'name', duplicate_current, 'prename')
	f.add_transition(';', 'name',  end_data_decl, 'done')
	f.add_transition('(', 'name', set_func_name, 'args')
	f.add_transition_any('name', accumulate, 'name')

	# Args Declaration
	f.add_transition('(', 'args', open_scope_accumulate, 'args')
	f.add_transition(')', 'args', end_func_decl, 'declared')
	f.add_transition_list(ws, 'args', accumulate, 'args')
	f.add_transition_any('args', accumulate, 'args')

	# Processing for lines that don't represent an exported item.
	f.add_transition('{', 'not_exported', open_scope, 'not_exported')
	f.add_transition('}', 'not_exported', close_scope, 'not_exported')
	f.add_transition(';', 'not_exported', check_scope, 'done')
	f.add_transition_any('not_exported', None, 'not_exported')


	# After a function declaration, but before the ;
	f.add_transition(';', 'declared', handled_success, 'done')
	f.add_transition_any('declared', None, 'declared')

	# Our final state.
	f.add_empty_transition('done', 'init', reset_fsm)

	return f.process_list(lines)

def extract_preprocessor(lines):

	def is_preprocessor_line(fsm):
		if not fsm.scope_level:
			fsm.next_state = fsm.current_state
		else:
			accumulate(fsm)

	def accumulate_with_slash(fsm):
		fsm.memory[-1] = fsm.memory[-1] + '/' + fsm.input_symbol

	def close_scope_comments(fsm):
		close_scope(fsm)
		accumulate(fsm)

	def close_scope_newline(fsm):
		close_scope(fsm)
		accumulate(fsm)

	def check_close_scope(fsm):
		if fsm.scope_level:
			close_scope_newline(fsm)
		else:
			accumulate(fsm)

	# Build our finite state machine.
	f = fsm.FSM('init', [''], '')
	f.set_default_transition(error, 'init')

	# our initial state.
	f.add_transition_list(indents, 'init', accumulate, 'init')
	f.add_transition_list(nl, 'init', check_close_scope, 'init')
	f.add_transition('/', 'init', accumulate, 'start_comment')
	f.add_transition('#', 'init', open_scope_accumulate, 'preprocessor')
	f.add_transition_any('init', is_preprocessor_line, 'preprocessor')

	# Preprocessor line.
	f.add_transition('\\', 'preprocessor', accumulate, 'escape')
	f.add_transition_list(nl, 'preprocessor', close_scope_newline, 'newline')
	f.add_transition('/', 'preprocessor', accumulate, 'preprocessor_start_comment')
	f.add_transition_any('preprocessor', accumulate, 'preprocessor')

	# Escape character has been specified. (\) This is to check if the current preprocessor
	# macro spans multiple lines.
	f.add_transition_list(nl, 'escape', accumulate, 'newline')
	f.add_transition_any('escape', accumulate, 'preprocessor')

	# Decide what kind of comment this is
	f.add_transition('*', 'start_comment', accumulate, 'block_comment')
	f.add_transition('/', 'start_comment', accumulate, 'line_comment')

	# Needed separately in case there's a comment on a preprocessor line.
	f.add_transition('/', 'preprocessor_start_comment', close_scope_comments, 'line_comment')
	f.add_transition('*', 'preprocessor_start_comment', close_scope_comments, 'block_comment')
	f.add_transition_any('preprocessor_start_comment', accumulate, 'preprocessor')

	# Block comment state
	f.add_transition('*', 'block_comment', accumulate, 'block_comment_end')
	f.add_transition_list(nl, 'block_comment', accumulate, 'block_comment')
	f.add_transition_any('block_comment', accumulate, 'block_comment')

	# Check if the next symbol is a slash to see if we're closing off a block comment.
	f.add_transition('/', 'block_comment_end', accumulate, 'init')
	f.add_transition_any('block_comment_end', accumulate, 'block_comment')

	# Line comment state
	f.add_transition(nl, 'line_comment', accumulate, 'newline')
	f.add_transition_any('line_comment', accumulate, 'line_comment')

	# Since new lines can be \n or \r\n or \r, we need to make sure we have a state for it.
	f.add_transition_list(nl, 'newline', accumulate, 'newline')
	f.add_empty_transition('newline', 'init')
	f.process_list(lines)
	return f.memory[-1]


if __name__=='__main__':
	def pprototypes(r):
		for p in r:
			print 'Type:', p.decltype
			print 'Name:', p.name
			print 'Returns:', p.rettype
			if p.decltype == 'Func':
				print 'Args:', '( %s )' % p.args
			print ''
	pprototypes(parse_declarations('PythonDynLoad_Func(void *) PyMem_Malloc(size_t);')[0])
	pprototypes(parse_declarations('PythonDynLoad_Data(PyObject *) PyExc_SystemError;')[0])
	pprototypes(parse_declarations('PythonDynLoad_Data(int) Py_IgnoreEnvironmentFlag;')[0])
	pprototypes(parse_declarations('PythonDynLoad_Data(PyIntObject) _Py_ZeroStruct, _Py_TrueStruct, *_Py_NoneType;')[0])