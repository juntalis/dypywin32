#ifndef Py_CEVAL_H
#define Py_CEVAL_H
#ifdef __cplusplus
#endif
/* Interface to random parts in ceval.c */
/* Inline this */
#define PyEval_CallObject(func,arg) \
    PyEval_CallObjectWithKeywords(func, arg, (PyObject *)NULL)
  /* Avoid including frameobject.h */
/* Look at the current frame's (if any) code's co_flags, and turn on
   the corresponding compiler flags in cf->cf_flags.  Return 1 if any
   flag was set, else return 0. */
/* Protection against deeply nested recursive calls */
#define Py_EnterRecursiveCall(where)                                    \
            (_Py_MakeRecCheck(PyThreadState_GET()->recursion_depth) &&  \
             _Py_CheckRecursiveCall(where))
#define Py_LeaveRecursiveCall()                         \
            (--PyThreadState_GET()->recursion_depth)
#ifdef USE_STACKCHECK
#  define _Py_MakeRecCheck(x)  (++(x) > --_Py_CheckRecursionLimit)
#else
#  define _Py_MakeRecCheck(x)  (++(x) > _Py_CheckRecursionLimit)
#endif
/* this used to be handled on a per-thread basis - now just two globals */
/* Interface for threads.
   A module that plans to do a blocking system call (or something else
   that lasts a long time and doesn't touch Python data) can allow other
   threads to run as follows:
    ...preparations here...
    Py_BEGIN_ALLOW_THREADS
    ...blocking system call here...
    Py_END_ALLOW_THREADS
    ...interpret result here...
   The Py_BEGIN_ALLOW_THREADS/Py_END_ALLOW_THREADS pair expands to a
   {}-surrounded block.
   To leave the block in the middle (e.g., with return), you must insert
   a line containing Py_BLOCK_THREADS before the return, e.g.
    if (...premature_exit...) {
        Py_BLOCK_THREADS
        PyErr_SetFromErrno(PyExc_IOError);
        return NULL;
    }
   An alternative is:
    Py_BLOCK_THREADS
    if (...premature_exit...) {
        PyErr_SetFromErrno(PyExc_IOError);
        return NULL;
    }
    Py_UNBLOCK_THREADS
   For convenience, that the value of 'errno' is restored across
   Py_END_ALLOW_THREADS and Py_BLOCK_THREADS.
   WARNING: NEVER NEST CALLS TO Py_BEGIN_ALLOW_THREADS AND
   Py_END_ALLOW_THREADS!!!
   The function PyEval_InitThreads() should be called only from
   initthread() in "threadmodule.c".
   Note that not yet all candidates have been converted to use this
   mechanism!
*/
#ifdef WITH_THREAD
#define Py_BEGIN_ALLOW_THREADS { \
                        PyThreadState *_save; \
                        _save = PyEval_SaveThread();
#define Py_BLOCK_THREADS        PyEval_RestoreThread(_save);
#define Py_UNBLOCK_THREADS      _save = PyEval_SaveThread();
#define Py_END_ALLOW_THREADS    PyEval_RestoreThread(_save); \
                 }
#else /* !WITH_THREAD */
#define Py_BEGIN_ALLOW_THREADS {
#define Py_BLOCK_THREADS
#define Py_UNBLOCK_THREADS
#define Py_END_ALLOW_THREADS }
#endif /* !WITH_THREAD */
#ifdef __cplusplus
#endif
#endif /* !Py_CEVAL_H */