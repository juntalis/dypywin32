#ifdef _STRINGIZE
#	define OLD__STRINGIZE _STRINGIZE
#	undef _STRINGIZE
#endif

#ifdef STRINGIZE
#	define OLD_STRINGIZE STRINGIZE
#	undef STRINGIZE
#endif

#define DynLoad_ReturnType(r) STRINGIZE(r) "|"
#define DynLoad_Function(f) STRINGIZE(f) "|"
#define DynLoad_Args(a) STRINGIZE(a)

#define _STRINGIZE(x) #x
#define STRINGIZE(x) _STRINGIZE(x)



#define DynLoad_ExternDecl(x) printf( x "\n")


/* #undef STRINGIZE
#undef _STRINGIZE

#ifdef OLD__STRINGIZE
#	define _STRINGIZE OLD__STRINGIZE
#	undef OLD__STRINGIZE
#endif

#ifdef OLD_STRINGIZE
#	define STRINGIZE OLD_STRINGIZE
#	undef OLD_STRINGIZE
#endif */

