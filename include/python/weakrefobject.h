/* Weak references objects for Python. */
#ifndef Py_WEAKREFOBJECT_H
#define Py_WEAKREFOBJECT_H
#ifdef __cplusplus
#endif
/* PyWeakReference is the base struct for the Python ReferenceType, ProxyType,
 * and CallableProxyType.
 */
    /* The object to which this is a weak reference, or Py_None if none.
     * Note that this is a stealth reference:  wr_object's refcount is
     * not incremented to reflect this pointer.
     */
    /* A callable to invoke when wr_object dies, or NULL if none. */
    /* A cache for wr_object's hash code.  As usual for hashes, this is -1
     * if the hash code isn't known yet.
     */
    /* If wr_object is weakly referenced, wr_object has a doubly-linked NULL-
     * terminated list of weak references to it.  These are the list pointers.
     * If wr_object goes away, wr_object is set to Py_None, and these pointers
     * have no meaning then.
     */
#define PyWeakref_CheckRef(op) PyObject_TypeCheck(op, &_PyWeakref_RefType)
#define PyWeakref_CheckRefExact(op) \
        (Py_TYPE(op) == &_PyWeakref_RefType)
#define PyWeakref_CheckProxy(op) \
        ((Py_TYPE(op) == &_PyWeakref_ProxyType) || \
         (Py_TYPE(op) == &_PyWeakref_CallableProxyType))
/* This macro calls PyWeakref_CheckRef() last since that can involve a
   function call; this makes it more likely that the function call
   will be avoided. */
#define PyWeakref_Check(op) \
        (PyWeakref_CheckRef(op) || PyWeakref_CheckProxy(op))
#define PyWeakref_GET_OBJECT(ref) (((PyWeakReference *)(ref))->wr_object)
#ifdef __cplusplus
#endif
#endif /* !Py_WEAKREFOBJECT_H */