/* Descriptors */
#ifndef Py_DESCROBJECT_H
#define Py_DESCROBJECT_H
#ifdef __cplusplus
#endif
/* Flags for above struct */
#define PyWrapperFlag_KEYWORDS 1 /* wrapper function takes keyword args */
/* Various kinds of descriptor objects */
#define PyDescr_COMMON \
    PyObject_HEAD \
    PyTypeObject *d_type; \
    PyObject *d_name
      /* This can be any function pointer */
#define PyDescr_IsData(d) (Py_TYPE(d)->tp_descr_set != NULL)
#ifdef __cplusplus
#endif
#endif /* !Py_DESCROBJECT_H */