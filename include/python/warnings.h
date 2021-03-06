#ifndef Py_WARNINGS_H
#define Py_WARNINGS_H
#ifdef __cplusplus
#endif
#define PyErr_WarnPy3k(msg, stacklevel) \
  (Py_Py3kWarningFlag ? PyErr_WarnEx(PyExc_DeprecationWarning, msg, stacklevel) : 0)
/* DEPRECATED: Use PyErr_WarnEx() instead. */
#define PyErr_Warn(category, msg) PyErr_WarnEx(category, msg, 1)
#ifdef __cplusplus
#endif
#endif /* !Py_WARNINGS_H */