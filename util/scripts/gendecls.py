#!/usr/bin/env python
import _envshim as env
import os, sys, re
from prototypes import generate_tab
import subprocess2 as subproc
from common import *
from headers import parse_declarations, extract_preprocessor
from colorplus import coutput, bright

def log(*args):
	from colorplus import coutput
	coutput(' '.join(args))

def linearize_struct(matchobj):
	""" Compress struct/union declarations into a single line. """
	result = '{ '
	content = matchobj.group(1)
	result += ' '.join(split_lines(content))
	return result + ' }'

def preprocess_sources(*srcs):
	""" Preprocess python.c, filter out the crap, clean it up, and
	    get the result as a string. """
	args = [ os.path.join(env.bin_dir, 'msvcpp.bat')] + \
		   [ '-I%s' % env.root_file('include') ] + \
		   [ env.data_file(s) for s in srcs ]
	print ' '.join(args)
	try:
		processed = subproc.check_output(args, stderr=subproc.VOID)
	except subproc.CalledProcessError:
		print 'Command Args:', args
		raise

	processed_parts = processed.split('void landmark();')
	if len(processed_parts) == 1:
		raise Exception('Could not find our landmark in pyport.h')

	filtered = '\n'.join(filter(
		lambda l: not l.startswith('#pragma') and len(l) > 0,
		split_lines_trim(processed_parts[1])
	))

	# Some formatting issues.
	filtered = re.sub(
		r"(?m)PythonDynLoad_(\w+)\s*\(([^)]+)\)\s*([^\s])",
		r"PythonDynLoad_\1(\2) \3",
		re.sub(
			r"(?m)\r?\n\)", ")",
			re.sub("(?m)([^;\r{])\r?\n", r"\1 ", filtered)
		)
	)

	# Compress structs, etc down to a single line.
	filtered = re.sub(
		r"(?sm)\{[\t ]*\r?\n(.+?)\r?\n\}",
		linearize_struct,
		re.sub(
			r"(?m)\{\s*\r?\n([^{}]+?)\}",
			linearize_struct,
			filtered
		)
	)

	# Filter out extra spaces.
	return condense_space(filtered)

def get_dllexports(dll):
	""" Get exports of DLL. """
	dll2def = os.path.join(env.bin_dir, 'dll2def.exe')
	if not os.path.isfile(dll2def):
		build_script = os.path.join(env.src_dir, 'dll2def', 'build.bat')
		try:
			subproc.check_call([ build_script ], stderr=subproc.VOID, stdout=subproc.VOID, stdin=subproc.VOID)
		except subproc.CalledProcessError:
			import traceback
			traceback.print_exc()
			fatal_message(
				'Failed to build dll2def',
				''.join((
					'There was an error while trying to build dll2def. To resolve this issue, you ',
					'may want to check the following files to make sure they are correct:\n\n',
					'  /repository/util/src/dll2def/build.bat\n'
					'  /repository/util/bin/msvcc.bat\n'
					'  /repository/util/bin/_buildenv.bat\n\n'
					'If you continue having issue, please report this error at this project\'s GitHub. ',
					'(https://github.com/Juntalis/dypywin32)'
				))
			)
	return split_lines_clean(subproc.check_output(
		[ dll2def, env.data_file(dll) ], stderr=subproc.VOID
	))

def extract_exports(tabbase, source, arch):
	""" Extract our exported items from our preprocessed source code.
	    The tabbase argument specifies the resulting filename to write
	    our generated code to. (src/tabbase.c and include/tabbase.h)
	    Afterwards, we'll return the source code, with all the export
	    declarations removed. """
	# A collection of indexes to remove from the source
	removal_queue = []

	# Get our python DLL exports.
	dllname = 'python27.%s.dll' % arch
	log(bright('Build:', 'green'), bright('Processing','white'), dllname, bright('exports..\n', 'white'))
	exports = get_dllexports(dllname)

	# Generate the appropriate prototypes. We'll only keep stuff found exported from
	# our DLL
	log(bright('Build:', 'green'), bright('Processing export declarations..\n','white'))
	protos = filter(lambda p: p.name in exports, parse_declarations(source))

	# Generate our source files.
	macros = []
	entries = []
	for proto in protos:
		macro, entry = generate_tab(proto)
		macros.append(macro)
		entries.append(entry)
		if proto.valid_indexes: removal_queue.insert(0, [proto.start_index, proto.end_index])
	# Write the files.
	write_lines(env.root_file('src', tabbase+'.c'), entries)
	write_lines(env.root_file('include', tabbase+'.h'), macros)

	# Remove our declarations from the initial source code.
	buffer = filter(lambda c: ord(c) != 13, list(source))
	for removal in removal_queue:
		del buffer[removal[0]:removal[1]]
	return ''.join(buffer)

def extract_typedecls(source):
	"""
		Extract type definitions from the remaining source.

		NOTE: This function will be written into the existing state machine that
		handles extracting the preprocessor crap.
	"""
	typedecls = ['typedef', 'union', 'struct']
	src_template = """
#ifndef _DYNPYTHON_TYPES_H_
#define _DYNPYTHON_TYPES_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

# if defined (_WIN64)
	typedef __int64 ssize_t;
#elif defined (_WIN32)
	typedef int ssize_t;
#endif

%(decls)s

#ifdef __cplusplus
}
#endif

#endif /* _DYNPYTHON_TYPES_H_ */
"""
	# Our filter function.
	def is_typedecl(line):
		for t in typedecls:
			if line.startswith(t):
				return True
		return False
	log(bright('Build:', 'green'), bright('Processing type declarations..\n','white'))
	lines = src_template % { 'decls' : '\n'.join(filter(is_typedecl, split_lines_clean(source))) }
	write_text(env.root_file('include', 'dynpython_types.h'), lines)

def extract_header(filepath):
	""" Called from our call to walk_files. It extract just the preprocessor crap and saves it into a file in
	    our project's include folder. """
	incfile = os.path.basename(filepath)
	log(bright('    Processing', 'white'), incfile + '..')
	content = extract_preprocessor(read_text(filepath))
	outpath = env.root_file('include', incfile)
	write_lines(env.root_file('include', 'python', incfile), remove_blanks(split_lines_rtrim(content)))
	return outpath

def main(tabbase):
	preprocessed = preprocess_sources('python.c')
	preprocessed = extract_exports(tabbase, preprocessed, 'x86')
	extract_typedecls(preprocessed)
	log(bright('Build:', 'green'), bright('Processing header files..','white'))
	walk_files(env.inc_dir, extract_header, lambda p: p.endswith('.h'))

if __name__=='__main__':
	tabbase = 'dynpython_tab' if len(sys.argv) == 1 else sys.argv[1]
	main(tabbase)
