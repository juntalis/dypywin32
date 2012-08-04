/* Class object interface */
/* Revealing some structures (not for general use) */
#ifndef Py_CLASSOBJECT_H
#define Py_CLASSOBJECT_H
#ifdef __cplusplus
#endif
    		/* A tuple of class objects */
    		/* A dictionary */
    		/* A string */
    /* The following three are functions or NULL */
         /* List of weak references */
     	/* The class object */
    	  	/* A dictionary */
    	   /* List of weak references */
        /* The callable object implementing the method */
        /* The instance it is bound to, or NULL */
       /* The class that asked for the method */
      /* List of weak references */
#define PyClass_Check(op) ((op)->ob_type == &PyClass_Type)
#define PyInstance_Check(op) ((op)->ob_type == &PyInstance_Type)
#define PyMethod_Check(op) ((op)->ob_type == &PyMethod_Type)
/* Look up attribute with name (a string) on instance object pinst, using
 * only the instance and base class dicts.  If a descriptor is found in
 * a class dict, the descriptor is returned without calling it.
 * Returns NULL if nothing found, else a borrowed reference to the
 * value associated with name in the dict in which name was found.
 * The point of this routine is that it never calls arbitrary Python
 * code, so is always "safe":  all it does is dict lookups.  The function
 * can't fail, never sets an exception, and NULL is not an error (it just
 * means "not found").
 */
/* Macros for direct access to these values. Type checks are *not*
   done, so use with care. */
#define PyMethod_GET_FUNCTION(meth) \
        (((PyMethodObject *)meth) -> im_func)
#define PyMethod_GET_SELF(meth) \
	(((PyMethodObject *)meth) -> im_self)
#define PyMethod_GET_CLASS(meth) \
	(((PyMethodObject *)meth) -> im_class)
#ifdef __cplusplus
#endif
#endif /* !Py_CLASSOBJECT_H */