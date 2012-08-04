#ifndef Py_SYMTABLE_H
#define Py_SYMTABLE_H
#ifdef __cplusplus
#endif
       /* name of file being compiled */
       /* current symbol table entry */
       /* module entry */
         /* dictionary of symbol table entries */
           /* stack of namespace info */
          /* borrowed ref to MODULE in st_symbols */
               /* number of blocks */
             /* name of current class or NULL */
      /* module's future features */
             /* int: key in st_symbols */
        /* dict: name to flags */
           /* string: name of block */
       /* list of variable names */
       /* list of child ids */
        /* module, class, or function */
          /* false if namespace is optimized */
           /* true if block is nested */
               /* true if block has free variables */
         /* true if a child block has free vars,
                                     including free refs to globals */
          /* true if namespace is a generator */
            /* true if block has varargs */
        /* true if block has varkeywords */
         /* true if namespace uses return with
                                        an argument */
               /* first line of block */
           /* lineno of last exec or import * */
              /* counter for listcomp temp vars */
#define PySTEntry_Check(op) (Py_TYPE(op) == &PySTEntry_Type)
/* Flags for def-use information */
#define DEF_GLOBAL 1           /* global stmt */
#define DEF_LOCAL 2            /* assignment in code block */
#define DEF_PARAM 2<<1         /* formal parameter */
#define USE 2<<2               /* name is used */
#define DEF_FREE 2<<3         /* name used but not defined in nested block */
#define DEF_FREE_CLASS 2<<4    /* free variable from class's method */
#define DEF_IMPORT 2<<5        /* assignment occurred via import */
#define DEF_BOUND (DEF_LOCAL | DEF_PARAM | DEF_IMPORT)
/* GLOBAL_EXPLICIT and GLOBAL_IMPLICIT are used internally by the symbol
   table.  GLOBAL is returned from PyST_GetScope() for either of them.
   It is stored in ste_symbols at bits 12-14.
*/
#define SCOPE_OFF 11
#define SCOPE_MASK 7
#define LOCAL 1
#define GLOBAL_EXPLICIT 2
#define GLOBAL_IMPLICIT 3
#define FREE 4
#define CELL 5
/* The following three names are used for the ste_unoptimized bit field */
#define OPT_IMPORT_STAR 1
#define OPT_EXEC 2
#define OPT_BARE_EXEC 4
#define OPT_TOPLEVEL 8  /* top-level names, including eval and exec */
#define GENERATOR 1
#define GENERATOR_EXPRESSION 2
#ifdef __cplusplus
#endif
#endif /* !Py_SYMTABLE_H */