/* Parse tree node interface */
#ifndef Py_NODE_H
#define Py_NODE_H
#ifdef __cplusplus
#endif
/* Node access functions */
#define NCH(n)		((n)->n_nchildren)
#define CHILD(n, i)	(&(n)->n_child[i])
#define RCHILD(n, i)	(CHILD(n, NCH(n) + i))
#define TYPE(n)		((n)->n_type)
#define STR(n)		((n)->n_str)
/* Assert that the type of a node is what we expect */
#define REQ(n, type) assert(TYPE(n) == (type))
#ifdef __cplusplus
#endif
#endif /* !Py_NODE_H */