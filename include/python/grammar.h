/* Grammar interface */
#ifndef Py_GRAMMAR_H
#define Py_GRAMMAR_H
#ifdef __cplusplus
#endif
#include "bitset.h" /* Sigh... */
/* A label of an arc */
#define EMPTY 0		/* Label number 0 is by definition the empty label */
/* A list of labels */
/* An arc from one state to another */
    			/* Label of this arc */
    		/* State where this arc goes to */
/* A state in a DFA */
    				/* Array of arcs */
    /* Optional accelerators */
    		 	/* Lowest label index */
    		 	/* Highest label index */
    			/* Accelerator */
    		 	/* Nonzero for accepting state */
/* A DFA */
    		 	/* Non-terminal this represents */
    		/* For printing */
    		 	/* Initial state */
    		/* Array of states */
/* A grammar */
    				/* Array of DFAs */
    		 	/* Start symbol of the grammar */
    		 	/* Set if accelerators present */
/* FUNCTIONS */
#ifdef __cplusplus
#endif
#endif /* !Py_GRAMMAR_H */