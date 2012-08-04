/* Module object interface */
#ifndef Py_MODULEOBJECT_H
#define Py_MODULEOBJECT_H
#ifdef __cplusplus
#endif
#define PyModule_Check(op) PyObject_TypeCheck(op, &PyModule_Type)
#define PyModule_CheckExact(op) (Py_TYPE(op) == &PyModule_Type)
#ifdef __cplusplus
#endif
#endif /* !Py_MODULEOBJECT_H */