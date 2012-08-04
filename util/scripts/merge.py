incs = []
newincs = []
f = open('includes.txt')
for line in [l.strip('\r\n \t').lower() for l in f.readlines()]:
	if line not in incs:
		incs.append(line)
f.close()

f = open('files.txt')
for line in [l.strip('\r\n \t').lower() for l in f.readlines()]:
	if line not in incs:
		newincs.append(line)
f.close()

for inc in newincs: print '#include "%s"' % inc