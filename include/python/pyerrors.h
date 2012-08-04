#ifndef Py_ERRORS_H
#define Py_ERRORS_H
#ifdef __cplusplus
#endif
/* Error objects */
#ifdef Py_USING_UNICODE
#endif
#ifdef MS_WINDOWS
#endif
/* Error handling definitions */
#ifdef Py_DEBUG
#define _PyErr_OCCURRED() PyErr_Occurred()
#else
#define _PyErr_OCCURRED() (_PyThreadState_Current->curexc_type)
#endif
/* Error testing and normalization */
/* */
#define PyExceptionClass_Check(x)                                       \
    (PyClass_Check((x)) || (PyType_Check((x)) &&                        \
      PyType_FastSubclass((PyTypeObject*)(x), Py_TPFLAGS_BASE_EXC_SUBCLASS)))
#define PyExceptionInstance_Check(x)                    \
    (PyInstance_Check((x)) ||                           \
     PyType_FastSubclass((x)->ob_type, Py_TPFLAGS_BASE_EXC_SUBCLASS))
#define PyExceptionClass_Name(x)                                   \
    (PyClass_Check((x))                                            \
     ? PyString_AS_STRING(((PyClassObject*)(x))->cl_name)          \
     : (char *)(((PyTypeObject*)(x))->tp_name))
#define PyExceptionInstance_Class(x)                                    \
    ((PyInstance_Check((x))                                             \
      ? (PyObject*)((PyInstanceObject*)(x))->in_class                   \
      : (PyObject*)((x)->ob_type)))
/* Predefined exceptions */
#ifdef MS_WINDOWS
#endif
#ifdef __VMS
#endif
/* Predefined warning categories */
/* Convenience functions */
#ifdef MS_WINDOWS
#endif /* MS_WINDOWS */
#ifdef MS_WINDOWS
#endif /* MS_WINDOWS */
/* Export the old function so that the existing API remains available: */
// PyAPI_FUNC(void) PyErr_BadInternalCall(void);
PyAPI_FUNC(void) _PyErr_BadInternalCall(char *filename, int lineno);
/* Mask the old API with a call to the new API for code compiled under
   Python 2.0: */
#define PyErr_BadInternalCall() _PyErr_BadInternalCall(__FILE__, __LINE__)
/* Function to create a new exception */
PyAPI_FUNC(PyObject *) PyErr_NewException(
    char *name, PyObject *base, PyObject *dict);
PyAPI_FUNC(PyObject *) PyErr_NewExceptionWithDoc(
    char *name, char *doc, PyObject *base, PyObject *dict);
PyAPI_FUNC(void) PyErr_WriteUnraisable(PyObject *);
/* In sigcheck.c or signalmodule.c */
PyAPI_FUNC(int) PyErr_CheckSignals(void);
PyAPI_FUNC(void) PyErr_SetInterrupt(void);
/* In signalmodule.c */
int PySignal_SetWakeupFd(int fd);
/* Support for adding program text to SyntaxErrors */
PyAPI_FUNC(void) PyErr_SyntaxLocation(const char *, int);
PyAPI_FUNC(PyObject *) PyErr_ProgramText(const char *, int);
#ifdef Py_USING_UNICODE
/* The following functions are used to create and modify unicode
   exceptions from C */
/* create a UnicodeDecodeError object */
PyAPI_FUNC(PyObject *) PyUnicodeDecodeError_Create(
    const char *, const char *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *);
/* create a UnicodeEncodeError object */
PyAPI_FUNC(PyObject *) PyUnicodeEncodeError_Create(
    const char *, const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *);
/* create a UnicodeTranslateError object */
PyAPI_FUNC(PyObject *) PyUnicodeTranslateError_Create(
    const Py_UNICODE *, Py_ssize_t, Py_ssize_t, Py_ssize_t, const char *);
/* get the encoding attribute */
PyAPI_FUNC(PyObject *) PyUnicodeEncodeError_GetEncoding(PyObject *);
PyAPI_FUNC(PyObject *) PyUnicodeDecodeError_GetEncoding(PyObject *);
/* get the object attribute */
PyAPI_FUNC(PyObject *) PyUnicodeEncodeError_GetObject(PyObject *);
PyAPI_FUNC(PyObject *) PyUnicodeDecodeError_GetObject(PyObject *);
PyAPI_FUNC(PyObject *) PyUnicodeTranslateError_GetObject(PyObject *);
/* get the value of the start attribute (the int * may not be NULL)
   return 0 on success, -1 on failure */
PyAPI_FUNC(int) PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
PyAPI_FUNC(int) PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
PyAPI_FUNC(int) PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);
/* assign a new value to the start attribute
   return 0 on success, -1 on failure */
PyAPI_FUNC(int) PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
PyAPI_FUNC(int) PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
PyAPI_FUNC(int) PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);
/* get the value of the end attribute (the int *may not be NULL)
 return 0 on success, -1 on failure */
PyAPI_FUNC(int) PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
PyAPI_FUNC(int) PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
PyAPI_FUNC(int) PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);
/* assign a new value to the end attribute
   return 0 on success, -1 on failure */
PyAPI_FUNC(int) PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
PyAPI_FUNC(int) PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
PyAPI_FUNC(int) PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);
/* get the value of the reason attribute */
PyAPI_FUNC(PyObject *) PyUnicodeEncodeError_GetReason(PyObject *);
PyAPI_FUNC(PyObject *) PyUnicodeDecodeError_GetReason(PyObject *);
PyAPI_FUNC(PyObject *) PyUnicodeTranslateError_GetReason(PyObject *);
/* assign a new value to the reason attribute
   return 0 on success, -1 on failure */
PyAPI_FUNC(int) PyUnicodeEncodeError_SetReason(
    PyObject *, const char *);
PyAPI_FUNC(int) PyUnicodeDecodeError_SetReason(
    PyObject *, const char *);
PyAPI_FUNC(int) PyUnicodeTranslateError_SetReason(
    PyObject *, const char *);
#endif
/* These APIs aren't really part of the error implementation, but
   often needed to format error messages; the native C lib APIs are
   not available on all platforms, which is why we provide emulations
   for those platforms in Python/mysnprintf.c,
   WARNING:  The return value of snprintf varies across platforms; do
   not rely on any particular behavior; eventually the C99 defn may
   be reliable.
*/
#if defined(MS_WIN32) && !defined(HAVE_SNPRINTF)
# define HAVE_SNPRINTF
# define snprintf _snprintf
# define vsnprintf _vsnprintf
#endif
#include <stdarg.h>
PyAPI_FUNC(int) PyOS_snprintf(char *str, size_t size, const char  *format, ...)
                        Py_GCC_ATTRIBUTE((format(printf, 3, 4)));
PyAPI_FUNC(int) PyOS_vsnprintf(char *str, size_t size, const char  *format, va_list va)
                        Py_GCC_ATTRIBUTE((format(printf, 3, 0)));
#ifdef __cplusplus
}
#endif
#endif /* !Py_ERRORS_H */