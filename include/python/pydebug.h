#ifndef Py_PYDEBUG_H
#define Py_PYDEBUG_H
#ifdef __cplusplus
#endif
/* _XXX Py_QnewFlag should go away in 3.0.  It's true iff -Qnew is passed,
  on the command line, and is used in 2.2 by ceval.c to make all "/" divisions
  true divisions (which they will be in 3.0). */
/* Warn about 3.x issues */
/* this is a wrapper around getenv() that pays attention to
   Py_IgnoreEnvironmentFlag.  It should be used for getting variables like
   PYTHONPATH and PYTHONHOME from the environment */
#define Py_GETENV(s) (Py_IgnoreEnvironmentFlag ? NULL : getenv(s))
#ifdef __cplusplus
#endif
#endif /* !Py_PYDEBUG_H */