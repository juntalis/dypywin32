import sys
from os import path

def minify_line(line):
	# Clean up the line
	line = line.strip('\r\n')
	content = line.strip(' \t')
	
	# We're not going to bother dealing with code flow keywords.
	ignored_keywords = [
		'import', 'from', 'def', 'class', 'return',
		'if', 'elif', 'while', 'for', 'yield', 'print'
	]
	
	# Check for ignored or lines that would cause errors.
	if len(content) == 0:
		return None
	elif content.startswith('#'):
		return None
	elif content.endswith(':'):
		print "Error: Unfortunately, no handling for indented code is currently available."
		sys.exit(1)
	
	result = ''
	indent = True
	single_quote = False
	double_quote = False
	backslash = False
	ignored = False
	
	# And check if the line starts with an ignored keyword.
	for keyword in ignored_keywords:
		if content.startswith(keyword):
			ignored = True
	
	for c in line:
		# Handle the indentation
		if c in [' ','\t'] and indent:
			result += c
			continue
		elif indent and c == content[0]:
			indent = False
		
		# Handle single quotes (')
		if c == "'":
			if not single_quote and not double_quote:
				single_quote = True
			elif single_quote and not backslash:
				single_quote = False
			elif double_quote:
				result += '\\'
		
		# Handle double quotes (")
		if c == '"':
			if not single_quote and not double_quote:
				double_quote = True
				c = "'"
			elif double_quote and not backslash:
				double_quote = False
				c = "'"
		
		# Handle backslashes
		if backslash:
			backslash = False
		elif c == '\\' and not backslash:
			if single_quote or double_quote:
				backslash = True
		
		# Handle whitespaces outside of strings.
		if c == ' ' and not single_quote and not double_quote and not ignored:
			continue
		result += c
	
	return result

def inline_file(fpath):
	result = []
	f_input = open(fpath)
	for line in f_input.readlines():
		line = minify_line(line)
		if line is None: continue
		result.append(line)
	f_input.close()
	if len(result) == 0:
		return ''
	else:
		return '; '.join(result)

def main(args):
	buffer = ['/* Python Scripts Inlined as C-Strings */','']
	for arg in args:
		# Convert our file to a single line.
		content = inline_file(arg)
		
		# Get the length.
		script_length = len(content)
		if script_length == 0: continue
		
		# And lastly, escape any escape sequences.
		content = content.replace('\\','\\\\').replace('"','\"')
		
		# Generate our variable name.
		script_base = path.basename(arg)
		cvar = path.splitext(script_base)[0].replace('-','_').replace(' ','_') + '_script'
		buffer += [
			'// Script: %s' % script_base,
			'static const char* %s = "%s";' % (cvar, content),
			'static const size_t %s_length = %d;' % (cvar, script_length),
			''
		]
		
	f_output = open('output.h', 'w')
	f_output.write('\n'.join(buffer))
	f_output.close()

if __name__=='__main__':
	if len(sys.argv) == 1:
		print 'Usage: %s script.py [script2.py ... scriptN.py]'
		sys.exit(0)
	main(sys.argv[1:])