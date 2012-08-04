#ifndef Py_TRACEBACK_H
#define Py_TRACEBACK_H
#ifdef __cplusplus
#endif
/* Traceback interface */
/* Reveal traceback type so we can typecheck traceback objects */
#define PyTraceBack_Check(v) (Py_TYPE(v) == &PyTraceBack_Type)
#ifdef __cplusplus
#endif
#endif /* !Py_TRACEBACK_H */