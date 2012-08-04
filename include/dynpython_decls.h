#ifndef _DYNPYTHON_DECLS_H_
#define _DYNPYTHON_DECLS_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*DynPy_TabProc)();

struct DynPy_Import {
	char *name;
	DynPy_TabProc proc;
};

PyAPI_DATA(struct DynPy_Import) DynPy_ImportsTab[];
//PyAPI_DATA(int) _DynPy_IsInitialized;

PyAPI_FUNC(void) _Py_XINCREF(PyObject *);
PyAPI_FUNC(void) _Py_XDECREF(PyObject *ob);

#define Py_XINCREF(x) _Py_XINCREF((PyObject *)x)
#define Py_XDECREF(x) _Py_XDECREF((PyObject *)x)
#define Py_DECREF(x) Py_XDECREF((PyObject *)x)
#define Py_INCREF(x) Py_XINCREF((PyObject *)x)

PyAPI_FUNC(void) DynPy_Initialize();
PyAPI_FUNC(int) DynPy_IsInitialized();
PyAPI_FUNC(void) DynPy_Finalize();

#ifdef DYNPYTHON_LAZYLOAD
	PyAPI_FUNC(DynPy_TabProc) DynPy_GetAddr(int i);
#else
#	define DynPy_GetAddr(x) DynPy_ImportsTab[x].proc
#endif

PyAPI_FUNC(void) DynPy_Debug(const char*, ...);
PyAPI_FUNC(void) DynPy_Warn(const char*, ...);
PyAPI_FUNC(void) DynPy_Fatal(int, const char*, ...);

#ifdef __cplusplus
}
#endif

#endif /* _DYNPYTHON_DECLS_H_ */
