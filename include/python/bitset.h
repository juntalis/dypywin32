#ifndef Py_BITSET_H
#define Py_BITSET_H
#ifdef __cplusplus
#endif
/* Bitset interface */
#define BYTE		char
#define testbit(ss, ibit) (((ss)[BIT2BYTE(ibit)] & BIT2MASK(ibit)) != 0)
     /* Returns 0 if already set */
#define BITSPERBYTE	(8*sizeof(BYTE))
#define NBYTES(nbits)	(((nbits) + BITSPERBYTE - 1) / BITSPERBYTE)
#define BIT2BYTE(ibit)	((ibit) / BITSPERBYTE)
#define BIT2SHIFT(ibit)	((ibit) % BITSPERBYTE)
#define BIT2MASK(ibit)	(1 << BIT2SHIFT(ibit))
#define BYTE2BIT(ibyte)	((ibyte) * BITSPERBYTE)
#ifdef __cplusplus
#endif
#endif /* !Py_BITSET_H */