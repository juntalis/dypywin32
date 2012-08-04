/* Definitions for bytecode */
#ifndef Py_CODE_H
#define Py_CODE_H
#ifdef __cplusplus
#endif
/* Bytecode object */
     		/* #arguments, except *args */
     		/* #local variables */
     		/* #entries needed for evaluation stack */
     		/* CO_..., see below */
     		/* instruction opcodes */
     	/* list (constants used) */
     		/* list of strings (names used) */
     	/* tuple of strings (local variable names) */
     	/* tuple of strings (free variable names) */
           /* tuple of strings (cell variable names) */
    /* The rest doesn't count for hash/cmp */
     	/* string (where it was loaded from) */
     		/* string (name, for reference) */
     		/* first source line number */
     	/* string (encoding addr<->lineno mapping) See
				   Objects/lnotab_notes.txt for details. */
          /* for optimization only (see frameobject.c) */
        /* to support weakrefs to code objects */
/* Masks for co_flags above */
#define CO_OPTIMIZED	0x0001
#define CO_NEWLOCALS	0x0002
#define CO_VARARGS	0x0004
#define CO_VARKEYWORDS	0x0008
#define CO_NESTED       0x0010
#define CO_GENERATOR    0x0020
/* The CO_NOFREE flag is set if there are no free or cell variables.
   This information is redundant, but it allows a single flag test
   to determine whether there is any extra work to be done when the
   call frame it setup.
*/
#define CO_NOFREE       0x0040
#if 0
/* This is no longer used.  Stopped defining in 2.5, do not re-use. */
#define CO_GENERATOR_ALLOWED    0x1000
#endif
#define CO_FUTURE_DIVISION    	0x2000
#define CO_FUTURE_ABSOLUTE_IMPORT 0x4000 /* do absolute imports by default */
#define CO_FUTURE_WITH_STATEMENT  0x8000
#define CO_FUTURE_PRINT_FUNCTION  0x10000
#define CO_FUTURE_UNICODE_LITERALS 0x20000
/* This should be defined if a future statement modifies the syntax.
   For example, when a keyword is added.
*/
#if 1
#define PY_PARSER_REQUIRES_FUTURE_KEYWORD
#endif
#define CO_MAXBLOCKS 20 /* Max static block nesting within a function */
#define PyCode_Check(op) (Py_TYPE(op) == &PyCode_Type)
#define PyCode_GetNumFree(op) (PyTuple_GET_SIZE((op)->co_freevars))
/* Public interface */
        /* same as struct above */
/* Creates a new empty code object with the specified source location. */
/* Return the line number associated with the specified bytecode index
   in this code object.  If you just need the line number of a frame,
   use PyFrame_GetLineNumber() instead. */
/* for internal use only */
#define _PyCode_GETCODEPTR(co, pp) \
	((*Py_TYPE((co)->co_code)->tp_as_buffer->bf_getreadbuffer) \
	 ((co)->co_code, 0, (void **)(pp)))
/* Update *bounds to describe the first and one-past-the-last instructions in the
   same line as lasti.  Return the number of that line.
*/
#ifdef __cplusplus
#endif
#endif /* !Py_CODE_H */