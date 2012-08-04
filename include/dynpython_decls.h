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


/**
 * Below is just some brainstorming on a way to address the whole issue of having to
 * call DynPy_Initialize() before calling any Python functions. The goal of this project
 * is to make it as seemless as possible to provide a drop-in solution that will be completely
 * compatible with a normal CPython embedded program, so having to make any extra calls bugs me.
 */
#if 0

PyAPI_DATA(int) DynPy_LibraryLoaded;

typedef void (*Py_SetProgramNameCall)(char*);

#ifndef inline
#	define inline __forceinline
#	define INLINE_DEFINED
#endif

/* Probably don't need to check the DynPy_LibraryLoaded variable, since
   most of this time these inline functions would only be called if the
   library wasn't loaded. */

#define DynPy_Wrap_VoidFunc(FUNC,ARGS,CALL)	\
inline void Dyn##FUNC##ARGS { \
	if(!DynPy_LibraryLoaded) DynPy_InitializeLibrary(); \
	FUNC(CALL); \
}

#define DynPy_Wrap_RetFunc(RTYPE,FUNC,ARGS,CALL) \
inline RTYPE Dyn##FUNC##ARGS { \
	if(!DynPy_LibraryLoaded) DynPy_InitializeLibrary(); \
	return FUNC(CALL); \
}

DynPy_Wrap_VoidFunc(Py_Initialize,(), )
DynPy_Wrap_RetFunc(int, Py_IsInitialized,(),  )
DynPy_Wrap_VoidFunc(Py_InitializeEx,(int initsigs), initsigs)
DynPy_Wrap_VoidFunc(Py_SetProgramName,(char* name), name)

DynPy_Wrap_VoidFunc(PyEval_InitThreads,(), )
DynPy_Wrap_RetFunc(int, PyEval_ThreadsInitialized,(),  )
DynPy_Wrap_VoidFunc(PyEval_ReleaseLock,(), )
DynPy_Wrap_VoidFunc(PyEval_AcquireLock,(), )

PyAPI_DATA(Py_SetProgramNameCall) DynPy_SetProgramName_Tab[] {
	(Py_SetProgramNameCall)DynPy_GetAddr(672),
	DynPy_SetProgramName,
	NULL
};



#define Py_SetProgramName (Py_SetProgramNameCall)DynPy_SetProgramName_Tab[DynPy_LibraryLoaded])


#ifdef INLINE_DEFINED
#	undef inline
#	undef INLINE_DEFINED
#endif

#endif /* if 0 */


#ifdef __cplusplus
}
#endif

#endif /* _DYNPYTHON_DECLS_H_ */
