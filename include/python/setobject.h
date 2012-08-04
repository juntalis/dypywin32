/* Set object interface */
#ifndef Py_SETOBJECT_H
#define Py_SETOBJECT_H
#ifdef __cplusplus
#endif
/*
There are three kinds of slots in the table:
1. Unused:  key == NULL
2. Active:  key != NULL and key != dummy
3. Dummy:   key == dummy
Note: .pop() abuses the hash field of an Unused or Dummy slot to
hold a search finger.  The hash field of Unused or Dummy slots has
no meaning otherwise.
*/
#define PySet_MINSIZE 8
           /* cached hash code for the entry key */
/*
This data structure is shared by set and frozenset objects.
*/
       /* # Active + # Dummy */
       /* # Active */
    /* The table contains mask + 1 slots, and that's a power of 2.
     * We store the mask instead of the size because the mask is more
     * frequently needed.
     */
    /* table points to smalltable for small tables, else to
     * additional malloc'ed memory.  table is never NULL!  This rule
     * saves repeated runtime null-tests.
     */
                       /* only used by frozenset objects */
           /* List of weak references */
/* Invariants for frozensets:
 *     data is immutable.
 *     hash is the hash of the frozenset or -1 if not computed yet.
 * Invariants for sets:
 *     hash is -1
 */
#define PyFrozenSet_CheckExact(ob) (Py_TYPE(ob) == &PyFrozenSet_Type)
#define PyAnySet_CheckExact(ob) \
    (Py_TYPE(ob) == &PySet_Type || Py_TYPE(ob) == &PyFrozenSet_Type)
#define PyAnySet_Check(ob) \
    (Py_TYPE(ob) == &PySet_Type || Py_TYPE(ob) == &PyFrozenSet_Type || \
      PyType_IsSubtype(Py_TYPE(ob), &PySet_Type) || \
      PyType_IsSubtype(Py_TYPE(ob), &PyFrozenSet_Type))
#define PySet_Check(ob) \
    (Py_TYPE(ob) == &PySet_Type || \
    PyType_IsSubtype(Py_TYPE(ob), &PySet_Type))
#define   PyFrozenSet_Check(ob) \
    (Py_TYPE(ob) == &PyFrozenSet_Type || \
      PyType_IsSubtype(Py_TYPE(ob), &PyFrozenSet_Type))
#define PySet_GET_SIZE(so) (((PySetObject *)(so))->used)
#ifdef __cplusplus
#endif
#endif /* !Py_SETOBJECT_H */