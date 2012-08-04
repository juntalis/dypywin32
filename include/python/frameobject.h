/* Frame object interface */
#ifndef Py_FRAMEOBJECT_H
#define Py_FRAMEOBJECT_H
#ifdef __cplusplus
#endif
	 			/* what kind of block this is */
	 		/* where to jump to find handler */
	 		/* value stack level to pop to */
	  	/* previous frame, or NULL */
	 	/* code segment */
	 	/* builtin symbol table (PyDictObject) */
	 	/* global symbol table (PyDictObject) */
	 		/* local symbol table (any mapping) */
	 	/* points after the last local */
	/* Next free slot in f_valuestack.  Frame creation sets to f_valuestack.
	   Frame evaluation usually NULLs it, but a frame that yields sets it
	   to the current stack top. */
	 		/* Trace function */
	/* If an exception is raised in this frame, the next three are used to
	 * record the exception info (if any) originally in the thread state.  See
	 * comments before set_exc_info() -- it's not obvious.
	 * Invariant:  if _type is NULL, then so are _value and _traceback.
	 * Desired invariant:  all three are NULL, or all three are non-NULL.  That
	 * one isn't currently true, but "should be".
	 */
	 		/* Last instruction if called */
	/* Call PyFrame_GetLineNumber() instead of reading this field
	   directly.  As of 2.3 f_lineno is only valid when tracing is
	   active (i.e. when f_trace is set).  At other times we use
	   PyCode_Addr2Line to calculate the line from the current
	   bytecode index. */
	 		/* Current line number */
	 		/* index in f_blockstack */
	  /* for try and loop blocks */
	 	/* locals+stack, dynamically sized */
/* Standard object interface */
#define PyFrame_Check(op) ((op)->ob_type == &PyFrame_Type)
#define PyFrame_IsRestricted(f) \
	((f)->f_builtins != (f)->f_tstate->interp->builtins)
/* The rest of the interface is specific for frame objects */
/* Block management functions */
/* Extend the value stack */
/* Conversions between "fast locals" and locals in dictionary */
/* Return the line of code the frame is currently executing. */
#ifdef __cplusplus
#endif
#endif /* !Py_FRAMEOBJECT_H */