/* Cell object interface */
#ifndef Py_CELLOBJECT_H
#define Py_CELLOBJECT_H
#ifdef __cplusplus
#endif
	 	/* Content of the cell or NULL when empty */
#define PyCell_Check(op) (Py_TYPE(op) == &PyCell_Type)
#define PyCell_GET(op) (((PyCellObject *)(op))->ob_ref)
#define PyCell_SET(op, v) (((PyCellObject *)(op))->ob_ref = v)
#ifdef __cplusplus
#endif
#endif /* !Py_TUPLEOBJECT_H */