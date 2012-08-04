/* Thread and interpreter state structures and their interfaces */
#ifndef Py_PYSTATE_H
#define Py_PYSTATE_H
#ifdef __cplusplus
#endif
/* State shared between threads */
  /* Forward */
  /* Forward */
#ifdef HAVE_DLOPEN
#endif
#ifdef WITH_TSC
#endif
/* State unique per thread */
  /* Avoid including frameobject.h */
/* Py_tracefunc return -1 when raising an exception, or 0 for success. */
/* The following values are used for 'what' for tracefunc functions: */
#define PyTrace_CALL 0
#define PyTrace_EXCEPTION 1
#define PyTrace_LINE 2
#define PyTrace_RETURN 3
#define PyTrace_C_CALL 4
#define PyTrace_C_EXCEPTION 5
#define PyTrace_C_RETURN 6
    /* See Python/ceval.c for comments explaining most fields */
    /* 'tracing' keeps track of the execution depth when tracing/profiling.
       This is to prevent the actual trace/profile code from being recorded in
       the trace/profile. */
       /* Stores per-thread state */
    /* tick_counter is incremented whenever the check_interval ticker
     * reaches zero. The purpose is to give a useful measure of the number
     * of interpreted bytecode instructions in a given thread.  This
     * extremely lightweight statistic collector may be of interest to
     * profilers (like psyco.jit()), although nothing in the core uses it.
     */
      /* Asynchronous exception to raise */
      /* Thread id where this tstate was created */
    /* XXX signal handlers should also be here */
#ifdef WITH_THREAD
#endif
/* Variable and macro for in-line access to current thread state */
#ifdef Py_DEBUG
#define PyThreadState_GET() PyThreadState_Get()
#else
#define PyThreadState_GET() (PyThreadState *)(_PyThreadState_Current)
#endif
/* Ensure that the current thread is ready to call the Python
   C API, regardless of the current state of Python, or of its
   thread lock.  This may be called as many times as desired
   by a thread so long as each call is matched with a call to
   PyGILState_Release().  In general, other thread-state APIs may
   be used between _Ensure() and _Release() calls, so long as the
   thread-state is restored to its previous state before the Release().
   For example, normal use of the Py_BEGIN_ALLOW_THREADS/
   Py_END_ALLOW_THREADS macros are acceptable.
   The return value is an opaque "handle" to the thread state when
   PyGILState_Ensure() was called, and must be passed to
   PyGILState_Release() to ensure Python is left in the same state. Even
   though recursive calls are allowed, these handles can *not* be shared -
   each unique call to PyGILState_Ensure must save the handle for its
   call to PyGILState_Release.
   When the function returns, the current thread will hold the GIL.
   Failure is a fatal error.
*/
/* Release any resources previously acquired.  After this call, Python's
   state will be the same as it was prior to the corresponding
   PyGILState_Ensure() call (but generally this state will be unknown to
   the caller, hence the use of the GILState API.)
   Every call to PyGILState_Ensure must be matched by a call to
   PyGILState_Release on the same thread.
*/
/* Helper/diagnostic function - get the current thread state for
   this thread.  May return NULL if no GILState API has been used
   on the current thread.  Note the main thread always has such a
   thread-state, even if no auto-thread-state call has been made
   on the main thread.
*/
/* The implementation of sys._current_frames()  Returns a dict mapping
   thread id to that thread's current frame.
*/
/* Routines for advanced debuggers, requested by David Beazley.
   Don't use unless you know what you are doing! */
/* hook for PyEval_GetFrame(), requested for Psyco */
#ifdef __cplusplus
#endif
#endif /* !Py_PYSTATE_H */