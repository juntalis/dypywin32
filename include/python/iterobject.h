#ifndef Py_ITEROBJECT_H
#define Py_ITEROBJECT_H
/* Iterators (the basic kind, over a sequence) */
#ifdef __cplusplus
#endif
#define PySeqIter_Check(op) (Py_TYPE(op) == &PySeqIter_Type)
#define PyCallIter_Check(op) (Py_TYPE(op) == &PyCallIter_Type)
#ifdef __cplusplus
#endif
#endif /* !Py_ITEROBJECT_H */