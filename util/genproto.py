import re, os
import subprocess2 as proc


base_template = """
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
%s
	return 0;
}


"""

def build_protopy():
	out = proc.check_output('cl.exe -DNDEBUG -DPROTOPY -D_NDEBUG -D_WIN32 -DWIN32 -MD -EP -I..\\include -I. ..\\include\\pydynload.h'.split(' '), stderr=proc.STDOUT)
	lines = []
	for line in out.splitlines():
		line = line.strip(' \r\n\t')
		if re.match(r"^(printf\(.+)$", line):
			lines.append('\t'+line)
	fout = open('protopy.c', 'w')
	fout.write(base_template % '\n'.join(lines))
	fout.close()
	clcmd = 'cl.exe -nologo -W3 -WX- -O2 -Ob2 -Oi -Oy -GL -GF -Gm- -GS- -Gy -fp:precise protopy.c -link -OUT:protopy.exe -LTCG -OPT:REF -OPT:ICF'
	proc.check_call(clcmd.split(' '), stderr=os.devnull, stdout=os.devnull)

def cleanup():
	out = proc.check_output('protopy.exe'.split(' '), stderr=proc.STDOUT)
	os.unlink('protopy.obj')
	os.unlink('protopy.c')
	os.unlink('protopy.exe')
	return [l.strip(' \r\n\t') for l in out.splitlines()]

def genstubs(lines):
	macros = []
	stubs = []
	i = 0
	for line in lines:
		if len(line) == 0: continue
		parts = line.split('|')
		(ret, func, args) = tuple(parts)
		macros.append('#define %s ((%s(*)%s)imports[%d].proc)' % (func, ret, args, i))
		stubs.append('\t{ "%s", NULL },' % func)
		i += 1
	fstubs = open('stubs.h', 'w')
	fstubs.write('\n'.join(macros))
	fstubs.close()
	fstubs = open('stubs.c', 'w')
	fstubs.write('\n'.join(stubs))
	fstubs.close()

if __name__=='__main__':
	build_protopy()
	lines = cleanup()
	genstubs(lines)