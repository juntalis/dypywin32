/* Tuple object interface */
#ifndef Py_STRUCTSEQ_H
#define Py_STRUCTSEQ_H
#ifdef __cplusplus
#endif
/* Macro, *only* to be used to fill in brand new objects */
#define PyStructSequence_SET_ITEM(op, i, v) \
	(((PyStructSequence *)(op))->ob_item[i] = v)
#ifdef __cplusplus
#endif
#endif /* !Py_STRUCTSEQ_H */