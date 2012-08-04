"""
colorplus.py
Description: Just some wrappers around colorama for pretty output.
Author: Charles Grunwald (Juntalis) <ch@rles.grunwald.me>

This program is free software. It comes without any warranty, to
the extent permitted by applicable law. You can redistribute it
and/or modify it under the terms of the Do What The Fuck You Want
To Public License, Version 2, as published by Sam Hocevar. See
http://sam.zoy.org/wtfpl/COPYING for more details.
"""
from __future__ import print_function
from colorama import Fore, Back, Style
from string import Template
from decorators import memoized

__all__ = ['indented', 'indent', 'indent_after', 'dedent', 'dedent_after',
		   'reset_indentation', 'enable_color', 'disable_color', 'toggle_color',
		   'colored', 'bright', 'pretty', 'pad', 'lpad', 'rpad', 'pad_lines',
		   'lpad_lines', 'rpad_lines', 'sym', 'coutput']

_enabled = True
_indentl = 0
_initialized = False

def coutput(*args, **kwargs):
	global _initialized
	if not _initialized:
		from colorama import init, AnsiToWin32
		init()
		_initialized = True
	kwargs.setdefault('seperator', '')
	seperator = kwargs['seperator']
	del kwargs['seperator']
	message = seperator.join(args)
	if len(kwargs.keys()) > 0:
		message = Template(message).safe_substitute(kwargs)
	print(message)

def indented(*args):
	""" Get a string indented. """
	global _indentl
	return (_indentl * '    ') + ''.join(args) + '\n'

def indent(*args):
	""" Raise the indentation level. """
	global _indentl
	_indentl += 1
	if len(args) > 0: return indented(*args)

def indent_after(*args):
	""" Get a string indented, then raise the indentation level. """
	global _indentl
	s = indented(*args)
	_indentl += 1
	return s

def dedent(*args):
	""" Lower the indentation level """
	global _indentl
	if _indentl > 0: _indentl -= 1
	if len(args) > 0: return indented(*args)

def dedent_after(*args):
	""" Get a string indented, then lower the indentation level. """
	global _indentl
	s = indented(*args)
	_indentl += 1
	return s

def reset_indentation():
	""" Reset indentation level to zero. """
	global _indentl
	_indentl = 0

def enable_color():
	""" Enable color output from pretty """
	global _enabled
	_enabled = True

def disable_color():
	""" Disable color output from pretty """
	global _enabled
	_enabled = False

def toggle_color():
	""" Toggle color output from pretty """
	global _enabled
	_enabled = not _enabled

@memoized
def colored(text, color=None, on_color=None, style=None):
	"""Colorize text.

	Available text colors:
		black, red, green, yellow, blue, magenta, cyan, white, reset

	Available text highlights:
		black, red, green, yellow, blue, magenta, cyan, white, reset

	Available styles:
		bright, dim, normal, reset_all

	Example:
		colored('Hello, World!', 'red', 'green', 'bright')
		colored('Hello, World!', 'green')
	"""
	global _enabled
	text = str(text)
	# If we're not enabled, we can just return the text.
	if not _enabled: return text
	
	fmt_str = ''
	if color is not None: fmt_str += getattr(Fore, color.upper())
	if on_color is not None: fmt_str += getattr(Back, on_color.upper())
	if style is not None: fmt_str += getattr(Style, style.upper())
	return fmt_str + text + Style.RESET_ALL

@memoized
def _padchars(padchar=' ', count=1):
	return (padchar * count)

def pad(val, padchar=' ', count=1):
	""" Pad a string with some char/string repeated count times. """
	return _padchars(padchar, count) + val + _padchars(padchar, count)

def lpad(val, padchar=' ', count=1):
	""" Pad a string with some char/string repeated count times. """
	return _padchars(padchar, count) + val

def rpad(val, padchar=' ', count=1):
	""" Pad a string with some char/string repeated count times. """
	return val + _padchars(padchar, count)

def _split_lines(text):
	""" Split some lines, removing any new line characters at either end. """
	return [ l.strip('\r\n') for l in text.splitlines() ]

def pad_lines(text, padchar=' ', count=1):
	""" Same as pad but for do it over all lines in text. """
	return '\n'.join([ pad(l, padchar, count) for l in _split_lines(text) ])

def lpad_lines(text, padchar=' ', count=1):
	""" Same as pad but for do it over all lines in text. """
	return '\n'.join([ lpad(l, padchar, count) for l in _split_lines(text) ])

def rpad_lines(text, padchar=' ', count=1):
	""" Same as pad but for do it over all lines in text. """
	return '\n'.join([ rpad(l, padchar, count) for l in _split_lines(text) ])

@memoized
def sym(symbol):
	""" Just a shortcut to print a symbol in white """
	return pad(colored(symbol, 'white')) if symbol[0] == '=' else colored(symbol, 'white')

def bright(v, c):
	""" Just a shortcut to print stuff bright. """
	return colored(v, c, style='bright')

def pretty(key=None, val=None):
	""" Decide what color to color a value based on its type. """
	
	# Type helpers
	is_str = lambda t: t in [ str, unicode ]
	is_num = lambda t: t in [ int, float, long, complex]
	is_array= lambda t: t in [ list, set, tuple ]
	
	# Colorize the key if we have one.
	ckey = None
	keytype = None
	singlesym = None
	is_index = False
	if key is not None:
		keytype = type(key)
		if is_num(keytype):
			singlesym = '=>'
			is_index = True
			ckey = bright(key, 'white')
		else:
			singlesym = '='
			ckey = bright(key, 'green')
	
	# Color/Indentation Helpers
	with_key = lambda v: indented(v) if key is None else indented(ckey, sym(singlesym), v)
	bright_key = lambda c: with_key(bright(val, c))
	dull_key = lambda c: with_key(colored(val, c))
	coll_sym = lambda k: indent_after(sym('['), k, sym('] (')) if is_index else indent_after(k, sym(':'))
	
	# Some inline functions to common code in the dict and collection types
	def coll_start():
		result = ''
		if key is not None: result = coll_sym(ckey)
		else: indent()
		return result
	
	# Some inline functions to common code in the dict and collection types
	def coll_end(result):
		if is_index: result += dedent(sym(')'))
		else: dedent()
		return result
	
	# Get the type of the value and figure out how to display it.
	valtype = type(val)
	if val is None: return with_key(bright('None', 'black'))
	elif is_str(valtype): return bright_key('blue')
	elif is_num(valtype): return bright_key('cyan')
	elif is_array(valtype):
		result = coll_start()
		for i, item in enumerate(val): result += pretty(i,item)
		return coll_end(result)
	elif valtype == dict:
		result = coll_start()
		for k in val.keys(): result += pretty(k, val[k])
		return coll_end(result)
	else: return bright_key('magenta')

