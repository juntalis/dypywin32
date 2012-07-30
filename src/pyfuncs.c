#include "Python.h"

/* The following functions were borrowed/modified from the py2exe project. */
struct IMPORT imports[] = {
#include "stubs.c"
	{ NULL, NULL }, /* sentinel */
};

void Py_XDECREF(PyObject *ob)
{
	static PyObject *tup;
	if (tup == NULL)
		tup = PyTuple_New(1);
	/* Let the tuple take the refcount */
	PyTuple_SetItem(tup, 0, ob);
	/* and overwrite it */
	PyTuple_SetItem(tup, 0, PyInt_FromLong(0));
}

void Py_XINCREF(PyObject *ob)
{
	if (ob)
		Py_BuildValue("O", ob);
}

int load_python(char *dllname)
{
	int i;
	char *dllbase;
	struct IMPORT *p = imports;
	HMODULE hmod;
	if(dllname == NULL)
		if((dllname = python_library) == NULL)
			return 1;

	// In some cases (eg, ISAPI filters), Python may already be
	// in our process.  If so, we don't want it to try and
	// load a new one!  (Actually, we probably should not even attempt
	// to load an 'embedded' Python should GetModuleHandle work - but
	// that is less clear than this straight-forward case)
	// Get the basename of the DLL.
	dllbase = dllname + strlen(dllname);
	while (dllbase != dllname && *dllbase != '\\')
		dllbase--;
	if (*dllbase=='\\')
		++dllbase;
	hmod = GetModuleHandle(dllbase);
	if (hmod == NULL)
		hmod = LoadLibrary(dllname);
	if (hmod == NULL) {
		return 0;
	}
	for (i = 0; p->name; ++i, ++p) {
		p->proc = (void (*)())GetProcAddress(hmod, p->name);
		if (p->proc == NULL) {
			debug("undefined symbol %s -> exit(-1)\n", p->name);
			continue;
		}
	}
	return 1;
}