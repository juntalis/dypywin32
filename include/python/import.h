/* Module definition and import interface */
#ifndef Py_IMPORT_H
#define Py_IMPORT_H
#ifdef __cplusplus
#endif
#define PyImport_ImportModuleEx(n, g, l, f) \
	PyImport_ImportModuleLevel(n, g, l, f, -1)
#ifdef WITH_THREAD
#else
#define _PyImport_AcquireLock()
#define _PyImport_ReleaseLock() 1
#endif
/* Embedding apps may change this pointer to point to their favorite
   collection of frozen modules: */
#ifdef __cplusplus
#endif
#endif /* !Py_IMPORT_H */