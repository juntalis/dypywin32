/* Generator object interface */
#ifndef Py_GENOBJECT_H
#define Py_GENOBJECT_H
#ifdef __cplusplus
#endif
  /* Avoid including frameobject.h */
	/* The gi_ prefix is intended to remind of generator-iterator. */
	/* Note: gi_frame can be NULL if the generator is "finished" */
	/* True if generator is being executed. */
	/* The code object backing the generator */
	/* List of weak reference. */
#define PyGen_Check(op) PyObject_TypeCheck(op, &PyGen_Type)
#define PyGen_CheckExact(op) (Py_TYPE(op) == &PyGen_Type)
#ifdef __cplusplus
#endif
#endif /* !Py_GENOBJECT_H */