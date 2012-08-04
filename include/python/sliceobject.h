#ifndef Py_SLICEOBJECT_H
#define Py_SLICEOBJECT_H
#ifdef __cplusplus
#endif
/* The unique ellipsis object "..." */
  /* Don't use this directly */
#define Py_Ellipsis (&_Py_EllipsisObject)
/* Slice object interface */
/*
A slice object containing start, stop, and step data members (the
names are from range).  After much talk with Guido, it was decided to
let these be any arbitrary python type.  Py_None stands for omitted values.
*/
       	/* not NULL */
#define PySlice_Check(op) (Py_TYPE(op) == &PySlice_Type)
#ifdef __cplusplus
#endif
#endif /* !Py_SLICEOBJECT_H */