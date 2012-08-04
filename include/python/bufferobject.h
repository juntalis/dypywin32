/* Buffer object interface */
/* Note: the object's structure is private */
#ifndef Py_BUFFEROBJECT_H
#define Py_BUFFEROBJECT_H
#ifdef __cplusplus
#endif
#define PyBuffer_Check(op) (Py_TYPE(op) == &PyBuffer_Type)
#define Py_END_OF_BUFFER	(-1)
#ifdef __cplusplus
#endif
#endif /* !Py_BUFFEROBJECT_H */