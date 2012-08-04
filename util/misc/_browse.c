#include "Python.h"
typedef long Py_hash_t;
/* inline attribute */
/* unused attribute */
typedef struct {PyObject **p; char *s; const long n; const char* encoding; const char is_unicode; const char is_str; const char intern; } __Pyx_StringTabEntry; /*proto*/
/* Type Conversion Predeclarations */
static __inline int __Pyx_PyObject_IsTrue(PyObject*);
static __inline PyObject* __Pyx_PyNumber_Int(PyObject* x);
static __inline Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static __inline PyObject * __Pyx_PyInt_FromSize_t(size_t);
static __inline size_t __Pyx_PyInt_AsSize_t(PyObject*);
static PyObject *__pyx_m;
static PyObject *__pyx_b;
static PyObject *__pyx_empty_tuple;
static PyObject *__pyx_empty_bytes;
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm= "_browse.c";
static const char *__pyx_filename;
static const char *__pyx_f[] = {
	"_browse.pyx",
};
/*--- Type declarations ---*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found); /*proto*/
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name); /*proto*/
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject **argnames[], \
PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args, \
const char* function_name); /*proto*/
static __inline void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected);
static __inline void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index);
static __inline int __Pyx_IterFinish(void); /*proto*/
static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected); /*proto*/
static __inline PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j) {
	PyObject *r;
	if (!j) return ((void *)0);
	r = PyObject_GetItem(o, j);
	do { if (  --((PyObject*)(j))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(j)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(j)))); } while (0);
	return r;
}
static __inline PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i) {
	if (((0 <= i) & (i < (((PyVarObject*)(o))->ob_size)))) {
		PyObject *r = (((PyListObject *)(o))->ob_item[i]);
		(   ((PyObject*)(r))->ob_refcnt++);
		return r;
	}
	else if ((-(((PyVarObject*)(o))->ob_size) <= i) & (i < 0)) {
		PyObject *r = (((PyListObject *)(o))->ob_item[(((PyVarObject*)(o))->ob_size) + i]);
		(   ((PyObject*)(r))->ob_refcnt++);
		return r;
	}
	return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}
static __inline PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i) {
	if (((0 <= i) & (i < (((PyVarObject*)(o))->ob_size)))) {
		PyObject *r = (((PyTupleObject *)(o))->ob_item[i]);
		(   ((PyObject*)(r))->ob_refcnt++);
		return r;
	}
	else if ((-(((PyVarObject*)(o))->ob_size) <= i) & (i < 0)) {
		PyObject *r = (((PyTupleObject *)(o))->ob_item[(((PyVarObject*)(o))->ob_size) + i]);
		(   ((PyObject*)(r))->ob_refcnt++);
		return r;
	}
	return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}
static __inline PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i) {
	if (((((PyObject*)(o))->ob_type) == &PyList_Type)) {
		Py_ssize_t n = ((i >= 0)) ? i : i + (((PyVarObject*)(o))->ob_size);
		if (((n >= 0) & (n < (((PyVarObject*)(o))->ob_size)))) {
			PyObject *r = (((PyListObject *)(o))->ob_item[n]);
			(   ((PyObject*)(r))->ob_refcnt++);
			return r;
		}
	}
	else if (((((PyObject*)(o))->ob_type) == &PyTuple_Type)) {
		Py_ssize_t n = ((i >= 0)) ? i : i + (((PyVarObject*)(o))->ob_size);
		if (((n >= 0) & (n < (((PyVarObject*)(o))->ob_size)))) {
			PyObject *r = (((PyTupleObject *)(o))->ob_item[n]);
			(   ((PyObject*)(r))->ob_refcnt++);
			return r;
		}
	} else {  /* inlined PySequence_GetItem() */
		PySequenceMethods *m = (((PyObject*)(o))->ob_type)->tp_as_sequence;
		if ((m && m->sq_item)) {
			if ((i < 0) && (m->sq_length)) {
				Py_ssize_t l = m->sq_length(o);
				if ((l < 0)) return ((void *)0);
				i += l;
			}
			return m->sq_item(o, i);
		}
	}
	return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}
static __inline void __Pyx_ErrRestore(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static __inline void __Pyx_ErrFetch(PyObject **type, PyObject **value, PyObject **tb); /*proto*/
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb); /*proto*/
static __inline void __Pyx_ExceptionSave(PyObject **type, PyObject **value, PyObject **tb); /*proto*/
static void __Pyx_ExceptionReset(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, long level); /*proto*/
static __inline void __Pyx_RaiseImportError(PyObject *name);
static PyObject *__Pyx_FindPy2Metaclass(PyObject *bases); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name,
PyObject *modname); /*proto*/
typedef struct {
	PyCFunctionObject func;
	int flags;
	PyObject *func_dict;
	PyObject *func_weakreflist;
	PyObject *func_name;
	PyObject *func_doc;
	PyObject *func_code;
	PyObject *func_closure;
	PyObject *func_classobj; /* No-args super() class cell */
	void *defaults;
	int defaults_pyobjects;
	PyObject *defaults_tuple; /* Const defaults tuple */
	PyObject *(*defaults_getter)(PyObject *);
} __pyx_CyFunctionObject;
static PyTypeObject *__pyx_CyFunctionType = 0;
static PyObject *__Pyx_CyFunction_New(PyTypeObject *,
PyMethodDef *ml, int flags,
PyObject *self, PyObject *module,
PyObject* code);
static __inline void *__Pyx_CyFunction_InitDefaults(PyObject *m,
size_t size,
int pyobjects);
static __inline void __Pyx_CyFunction_SetDefaultsTuple(PyObject *m,
PyObject *tuple);
static int __Pyx_CyFunction_init(void);
static __inline int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals); /*proto*/
static __inline int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals); /*proto*/
static int __Pyx_Print(PyObject*, PyObject *, int); /*proto*/
static int __Pyx_PrintOne(PyObject* stream, PyObject *o); /*proto*/
static __inline unsigned char __Pyx_PyInt_AsUnsignedChar(PyObject *);
static __inline unsigned short __Pyx_PyInt_AsUnsignedShort(PyObject *);
static __inline unsigned int __Pyx_PyInt_AsUnsignedInt(PyObject *);
static __inline char __Pyx_PyInt_AsChar(PyObject *);
static __inline short __Pyx_PyInt_AsShort(PyObject *);
static __inline int __Pyx_PyInt_AsInt(PyObject *);
static __inline signed char __Pyx_PyInt_AsSignedChar(PyObject *);
static __inline signed short __Pyx_PyInt_AsSignedShort(PyObject *);
static __inline signed int __Pyx_PyInt_AsSignedInt(PyObject *);
static __inline int __Pyx_PyInt_AsLongDouble(PyObject *);
static __inline unsigned long __Pyx_PyInt_AsUnsignedLong(PyObject *);
static __inline unsigned __int64 __Pyx_PyInt_AsUnsignedLongLong(PyObject *);
static __inline long __Pyx_PyInt_AsLong(PyObject *);
static __inline __int64 __Pyx_PyInt_AsLongLong(PyObject *);
static __inline signed long __Pyx_PyInt_AsSignedLong(PyObject *);
static __inline signed __int64 __Pyx_PyInt_AsSignedLongLong(PyObject *);
static void __Pyx_WriteUnraisable(const char *name, int clineno,
int lineno, const char *filename); /*proto*/
static int __Pyx_check_binary_version(void);
typedef struct {
	int code_line;
	PyCodeObject* code_object;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
	int count;
	int max_count;
	__Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = {0,0,((void *)0)};
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject *__pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);
static void __Pyx_AddTraceback(const char *funcname, int c_line,
int py_line, const char *filename); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
/* Module declarations from '_browse' */
static char *__pyx_v_7_browse_locationStr;
static char *__pyx_v_7_browse_cmdStr;
extern __declspec(dllexport) int browseBuild(char *, char *, int __pyx_skip_dispatch); /*proto*/
int __pyx_module_is_main__browse = 0;
/* Implementation of '_browse' */
static PyObject *__pyx_builtin_StopIteration;
static PyObject *__pyx_builtin_sorted;
static PyObject *__pyx_builtin_KeyboardInterrupt;
static PyObject *__pyx_pf_7_browse_match_strip( PyObject *__pyx_self, PyObject *__pyx_v_line, PyObject *__pyx_v_prefix); /* proto */
static PyObject *__pyx_pf_7_browse_2parse( PyObject *__pyx_self, PyObject *__pyx_v_text); /* proto */
static PyObject *__pyx_pf_7_browse_4generate_html( PyObject *__pyx_self, PyObject *__pyx_v_node); /* proto */
static PyObject *__pyx_pf_7_browse_6ninja_dump( PyObject *__pyx_self, PyObject *__pyx_v_target); /* proto */
static PyObject *__pyx_pf_7_browse_14RequestHandler_do_GET( PyObject *__pyx_self, PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_7_browse_14RequestHandler_2log_message( PyObject *__pyx_self,  PyObject *__pyx_v_self,  PyObject *__pyx_v_format,  PyObject *__pyx_v_args); /* proto */
static PyObject *__pyx_pf_7_browse_8browseBuild( PyObject *__pyx_self, char *__pyx_v_cmd, char *__pyx_v_location); /* proto */
static char __pyx_k_1[] = "\n";
static char __pyx_k_3[] = "  input: ";
static char __pyx_k_4[] = "    ";
static char __pyx_k_5[] = "| ";
static char __pyx_k_6[] = "|| ";
static char __pyx_k_7[] = "order-only";
static char __pyx_k_8[] = "  outputs:";
static char __pyx_k_9[] = "<!DOCTYPE html>\n<style>\nbody {\n    font-family: sans;\n    font-size: 0.8em;\n    margin: 4ex;\n}\nh1 {\n    font-weight: normal;\n    font-size: 140%;\n    text-align: center;\n    margin: 0;\n}\nh2 {\n    font-weight: normal;\n    font-size: 120%;\n}\ntt {\n    font-family: WebKitHack, monospace;\n    white-space: nowrap;\n}\n.filelist {\n  -webkit-columns: auto 2;\n}\n</style>";
static char __pyx_k_10[] = "<h1><tt>%s</tt></h1>";
static char __pyx_k_11[] = "<h2>target is built using rule <tt>%s</tt> of</h2>";
static char __pyx_k_12[] = "<div class=filelist>";
static char __pyx_k_13[] = "";
static char __pyx_k_14[] = " (%s)";
static char __pyx_k_15[] = "<tt><a href=\"?%s\">%s</a>%s</tt><br>";
static char __pyx_k_16[] = "</div>";
static char __pyx_k_17[] = "<h2>dependent edges build:</h2>";
static char __pyx_k_18[] = "<tt><a href=\"?%s\">%s</a></tt><br>";
static char __pyx_k_19[] = "-t";
static char __pyx_k_20[] = "/";
static char __pyx_k_22[] = "?";
static char __pyx_k_26[] = "Web server running on port %d, ctl-C to abort...";
static char __pyx_k_27[] = "http://localhost:%s";
static char __pyx_k_28[] = "Simple web server for browsing dependency graph data.\n\nThis script is cythonized, compiled, and linked into the final executable. It\nis initialized, imported, and browseBuild is called when the browse\ncommand is issued.\n";
static char __pyx_k_31[] = "C:\\Development\\cpp.workspace\\dynload_python\\src\\_browse.pyx";
static char __pyx_k_42[] = "BaseHTTPRequestHandler";
static char __pyx_k___[] = "_";
static char __pyx_k__cmd[] = "cmd";
static char __pyx_k__sys[] = "sys";
static char __pyx_k__Node[] = "Node";
static char __pyx_k__PIPE[] = "PIPE";
static char __pyx_k__args[] = "args";
static char __pyx_k__argv[] = "argv";
static char __pyx_k__line[] = "line";
static char __pyx_k__next[] = "next";
static char __pyx_k__node[] = "node";
static char __pyx_k__path[] = "path";
static char __pyx_k__proc[] = "proc";
static char __pyx_k__rule[] = "rule";
static char __pyx_k__self[] = "self";
static char __pyx_k__text[] = "text";
static char __pyx_k__type[] = "type";
static char __pyx_k__Popen[] = "Popen";
static char __pyx_k__extra[] = "extra";
static char __pyx_k__input[] = "input";
static char __pyx_k__lines[] = "lines";
static char __pyx_k__match[] = "match";
static char __pyx_k__parse[] = "parse";
static char __pyx_k__query[] = "query";
static char __pyx_k__split[] = "split";
static char __pyx_k__strip[] = "strip";
static char __pyx_k__wfile[] = "wfile";
static char __pyx_k__do_GET[] = "do_GET";
static char __pyx_k__format[] = "format";
static char __pyx_k__inputs[] = "inputs";
static char __pyx_k__output[] = "output";
static char __pyx_k__prefix[] = "prefix";
static char __pyx_k__sorted[] = "sorted";
static char __pyx_k__stdout[] = "stdout";
static char __pyx_k__target[] = "target";
static char __pyx_k___browse[] = "_browse";
static char __pyx_k__outputs[] = "outputs";
static char __pyx_k__Location[] = "Location";
static char __pyx_k____main__[] = "__main__";
static char __pyx_k____name__[] = "__name__";
static char __pyx_k____test__[] = "__test__";
static char __pyx_k__implicit[] = "implicit";
static char __pyx_k__location[] = "location";
static char __pyx_k__open_new[] = "open_new";
static char __pyx_k__HTTPServer[] = "HTTPServer";
static char __pyx_k__namedtuple[] = "namedtuple";
static char __pyx_k__ninja_dump[] = "ninja_dump";
static char __pyx_k__startswith[] = "startswith";
static char __pyx_k__subprocess[] = "subprocess";
static char __pyx_k__webbrowser[] = "webbrowser";
static char __pyx_k__collections[] = "collections";
static char __pyx_k__communicate[] = "communicate";
static char __pyx_k__end_headers[] = "end_headers";
static char __pyx_k__log_message[] = "log_message";
static char __pyx_k__match_strip[] = "match_strip";
static char __pyx_k__send_header[] = "send_header";
static char __pyx_k__StopIteration[] = "StopIteration";
static char __pyx_k__generate_html[] = "generate_html";
static char __pyx_k__send_response[] = "send_response";
static char __pyx_k__serve_forever[] = "serve_forever";
static char __pyx_k__BaseHTTPServer[] = "BaseHTTPServer";
static char __pyx_k__RequestHandler[] = "RequestHandler";
static char __pyx_k__KeyboardInterrupt[] = "KeyboardInterrupt";
static PyObject *__pyx_kp_s_1;
static PyObject *__pyx_kp_s_10;
static PyObject *__pyx_kp_s_11;
static PyObject *__pyx_kp_s_12;
static PyObject *__pyx_kp_s_13;
static PyObject *__pyx_kp_s_14;
static PyObject *__pyx_kp_s_15;
static PyObject *__pyx_kp_s_16;
static PyObject *__pyx_kp_s_17;
static PyObject *__pyx_kp_s_18;
static PyObject *__pyx_kp_s_19;
static PyObject *__pyx_kp_s_20;
static PyObject *__pyx_kp_s_22;
static PyObject *__pyx_kp_s_26;
static PyObject *__pyx_kp_s_27;
static PyObject *__pyx_kp_s_3;
static PyObject *__pyx_kp_s_31;
static PyObject *__pyx_kp_s_4;
static PyObject *__pyx_n_s_42;
static PyObject *__pyx_kp_s_5;
static PyObject *__pyx_kp_s_6;
static PyObject *__pyx_kp_s_7;
static PyObject *__pyx_kp_s_8;
static PyObject *__pyx_kp_s_9;
static PyObject *__pyx_n_s__BaseHTTPServer;
static PyObject *__pyx_n_s__HTTPServer;
static PyObject *__pyx_n_s__KeyboardInterrupt;
static PyObject *__pyx_n_s__Location;
static PyObject *__pyx_n_s__Node;
static PyObject *__pyx_n_s__PIPE;
static PyObject *__pyx_n_s__Popen;
static PyObject *__pyx_n_s__RequestHandler;
static PyObject *__pyx_n_s__StopIteration;
static PyObject *__pyx_n_s___;
static PyObject *__pyx_n_s____main__;
static PyObject *__pyx_n_s____name__;
static PyObject *__pyx_n_s____test__;
static PyObject *__pyx_n_s___browse;
static PyObject *__pyx_n_s__args;
static PyObject *__pyx_n_s__argv;
static PyObject *__pyx_n_s__cmd;
static PyObject *__pyx_n_s__collections;
static PyObject *__pyx_n_s__communicate;
static PyObject *__pyx_n_s__do_GET;
static PyObject *__pyx_n_s__end_headers;
static PyObject *__pyx_n_s__extra;
static PyObject *__pyx_n_s__format;
static PyObject *__pyx_n_s__generate_html;
static PyObject *__pyx_n_s__implicit;
static PyObject *__pyx_n_s__input;
static PyObject *__pyx_n_s__inputs;
static PyObject *__pyx_n_s__line;
static PyObject *__pyx_n_s__lines;
static PyObject *__pyx_n_s__location;
static PyObject *__pyx_n_s__log_message;
static PyObject *__pyx_n_s__match;
static PyObject *__pyx_n_s__match_strip;
static PyObject *__pyx_n_s__namedtuple;
static PyObject *__pyx_n_s__next;
static PyObject *__pyx_n_s__ninja_dump;
static PyObject *__pyx_n_s__node;
static PyObject *__pyx_n_s__open_new;
static PyObject *__pyx_n_s__output;
static PyObject *__pyx_n_s__outputs;
static PyObject *__pyx_n_s__parse;
static PyObject *__pyx_n_s__path;
static PyObject *__pyx_n_s__prefix;
static PyObject *__pyx_n_s__proc;
static PyObject *__pyx_n_s__query;
static PyObject *__pyx_n_s__rule;
static PyObject *__pyx_n_s__self;
static PyObject *__pyx_n_s__send_header;
static PyObject *__pyx_n_s__send_response;
static PyObject *__pyx_n_s__serve_forever;
static PyObject *__pyx_n_s__sorted;
static PyObject *__pyx_n_s__split;
static PyObject *__pyx_n_s__startswith;
static PyObject *__pyx_n_s__stdout;
static PyObject *__pyx_n_s__strip;
static PyObject *__pyx_n_s__subprocess;
static PyObject *__pyx_n_s__sys;
static PyObject *__pyx_n_s__target;
static PyObject *__pyx_n_s__text;
static PyObject *__pyx_n_s__type;
static PyObject *__pyx_n_s__webbrowser;
static PyObject *__pyx_n_s__wfile;
static PyObject *__pyx_int_200;
static PyObject *__pyx_int_302;
static PyObject *__pyx_int_404;
static PyObject *__pyx_k_tuple_2;
static PyObject *__pyx_k_tuple_21;
static PyObject *__pyx_k_tuple_23;
static PyObject *__pyx_k_tuple_24;
static PyObject *__pyx_k_tuple_25;
static PyObject *__pyx_k_tuple_29;
static PyObject *__pyx_k_tuple_32;
static PyObject *__pyx_k_tuple_34;
static PyObject *__pyx_k_tuple_36;
static PyObject *__pyx_k_tuple_38;
static PyObject *__pyx_k_tuple_40;
static PyObject *__pyx_k_codeobj_30;
static PyObject *__pyx_k_codeobj_33;
static PyObject *__pyx_k_codeobj_35;
static PyObject *__pyx_k_codeobj_37;
static PyObject *__pyx_k_codeobj_39;
static PyObject *__pyx_k_codeobj_41;
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_1match_strip(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_browse_1match_strip = {("match_strip"), (PyCFunction)__pyx_pw_7_browse_1match_strip, 0x0001|0x0002, (0)};
static PyObject *__pyx_pw_7_browse_1match_strip(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
	PyObject *__pyx_v_line = 0;
	PyObject *__pyx_v_prefix = 0;
	PyObject *__pyx_r = 0;
	;
	{
		static PyObject **__pyx_pyargnames[] = {&__pyx_n_s__line,&__pyx_n_s__prefix,0};
		PyObject* values[2] = {0,0};
		if ((__pyx_kwds)) {
			Py_ssize_t kw_args;
			const Py_ssize_t pos_args = (((PyVarObject*)(__pyx_args))->ob_size);
			switch (pos_args) {
			case  2: values[1] = (((PyTupleObject *)(__pyx_args))->ob_item[1]);
			case  1: values[0] = (((PyTupleObject *)(__pyx_args))->ob_item[0]);
			case  0: break;
			default: goto __pyx_L5_argtuple_error;
			}
			kw_args = PyDict_Size(__pyx_kwds);
			switch (pos_args) {
			case  0:
				if (((values[0] = PyDict_GetItem(__pyx_kwds, __pyx_n_s__line)) != 0)) kw_args--;
				else goto __pyx_L5_argtuple_error;
			case  1:
				if (((values[1] = PyDict_GetItem(__pyx_kwds, __pyx_n_s__prefix)) != 0)) kw_args--;
				else {
					__Pyx_RaiseArgtupleInvalid("match_strip", 1, 2, 2, 1); {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 916; goto __pyx_L3_error;}
				}
			}
			if ((kw_args > 0)) {
				if ((__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "match_strip") < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 920; goto __pyx_L3_error;}
			}
		} else if ((((PyVarObject*)(__pyx_args))->ob_size) != 2) {
			goto __pyx_L5_argtuple_error;
		} else {
			values[0] = (((PyTupleObject *)(__pyx_args))->ob_item[0]);
			values[1] = (((PyTupleObject *)(__pyx_args))->ob_item[1]);
		}
		__pyx_v_line = values[0];
		__pyx_v_prefix = values[1];
	}
	goto __pyx_L4_argument_unpacking_done;
	__pyx_L5_argtuple_error:;
	__Pyx_RaiseArgtupleInvalid("match_strip", 1, 2, 2, (((PyVarObject*)(__pyx_args))->ob_size)); {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 933; goto __pyx_L3_error;}
	__pyx_L3_error:;
	__Pyx_AddTraceback("_browse.match_strip", __pyx_clineno, __pyx_lineno, __pyx_filename);
	;
	return ((void *)0);
	__pyx_L4_argument_unpacking_done:;
	__pyx_r = __pyx_pf_7_browse_match_strip(__pyx_self, __pyx_v_line, __pyx_v_prefix);
	;
	return __pyx_r;
}
/* "_browse.pyx":47
* # of an edge.  But I think it's less confusing than alternatives.
* 
* def match_strip(line, prefix):             # <<<<<<<<<<<<<<
*     if not line.startswith(prefix):
*         return (False, line)
*/
static PyObject *__pyx_pf_7_browse_match_strip( PyObject *__pyx_self, PyObject *__pyx_v_line, PyObject *__pyx_v_prefix) {
	PyObject *__pyx_r = ((void *)0);
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	PyObject *__pyx_t_3 = ((void *)0);
	int __pyx_t_4;
	int __pyx_t_5;
	Py_ssize_t __pyx_t_6;
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	/* "_browse.pyx":48
* 
* def match_strip(line, prefix):
*     if not line.startswith(prefix):             # <<<<<<<<<<<<<<
*         return (False, line)
*     return (True, line[len(prefix):])
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_line, __pyx_n_s__startswith); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; __pyx_clineno = 973; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyTuple_New(1); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; __pyx_clineno = 975; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(__pyx_v_prefix))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_v_prefix);
	;
	__pyx_t_3 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_t_2), ((void *)0)); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; __pyx_clineno = 980; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
	__pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_t_3); if ((__pyx_t_4 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; __pyx_clineno = 984; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); __pyx_t_3 = 0;
	__pyx_t_5 = (!__pyx_t_4);
	if (__pyx_t_5) {
		/* "_browse.pyx":49
* def match_strip(line, prefix):
*     if not line.startswith(prefix):
*         return (False, line)             # <<<<<<<<<<<<<<
*     return (True, line[len(prefix):])
* 
*/
		do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
		__pyx_t_3 = ((0) ? ((   ((PyObject*)(((PyObject *) &_Py_TrueStruct)))->ob_refcnt++), ((PyObject *) &_Py_TrueStruct)) : ((   ((PyObject*)(((PyObject *) &_Py_ZeroStruct)))->ob_refcnt++), ((PyObject *) &_Py_ZeroStruct))); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 49; __pyx_clineno = 997; goto __pyx_L1_error;}
		;
		__pyx_t_2 = PyTuple_New(2); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 49; __pyx_clineno = 999; goto __pyx_L1_error;}
		;
		(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_t_3);
		;
		(   ((PyObject*)(__pyx_v_line))->ob_refcnt++);
		(((PyTupleObject *)(__pyx_t_2))->ob_item[1] = __pyx_v_line);
		;
		__pyx_t_3 = 0;
		__pyx_r = ((PyObject *)__pyx_t_2);
		__pyx_t_2 = 0;
		goto __pyx_L0;
		goto __pyx_L3;
	}
	__pyx_L3:;
	/* "_browse.pyx":50
*     if not line.startswith(prefix):
*         return (False, line)
*     return (True, line[len(prefix):])             # <<<<<<<<<<<<<<
* 
* def parse(text):
*/
	do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
	__pyx_t_2 = ((1) ? ((   ((PyObject*)(((PyObject *) &_Py_TrueStruct)))->ob_refcnt++), ((PyObject *) &_Py_TrueStruct)) : ((   ((PyObject*)(((PyObject *) &_Py_ZeroStruct)))->ob_refcnt++), ((PyObject *) &_Py_ZeroStruct))); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; __pyx_clineno = 1022; goto __pyx_L1_error;}
	;
	__pyx_t_6 = PyObject_Size(__pyx_v_prefix); if ((__pyx_t_6 == -1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; __pyx_clineno = 1024; goto __pyx_L1_error;}
	__pyx_t_3 = PySequence_GetSlice(__pyx_v_line, __pyx_t_6, ((Py_ssize_t)(((size_t)-1)>>1))); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; __pyx_clineno = 1025; goto __pyx_L1_error;}
	;
	__pyx_t_1 = PyTuple_New(2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 50; __pyx_clineno = 1027; goto __pyx_L1_error;}
	;
	(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = __pyx_t_2);
	;
	(((PyTupleObject *)(__pyx_t_1))->ob_item[1] = __pyx_t_3);
	;
	__pyx_t_2 = 0;
	__pyx_t_3 = 0;
	__pyx_r = ((PyObject *)__pyx_t_1);
	__pyx_t_1 = 0;
	goto __pyx_L0;
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_3) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); } while (0);
	__Pyx_AddTraceback("_browse.match_strip", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = ((void *)0);
	__pyx_L0:;
	;
	;
	return __pyx_r;
}
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_3parse(PyObject *__pyx_self, PyObject *__pyx_v_text); /*proto*/
static PyMethodDef __pyx_mdef_7_browse_3parse = {("parse"), (PyCFunction)__pyx_pw_7_browse_3parse, 0x0008, (0)};
static PyObject *__pyx_pw_7_browse_3parse(PyObject *__pyx_self, PyObject *__pyx_v_text) {
	PyObject *__pyx_r = 0;
	;
	__pyx_r = __pyx_pf_7_browse_2parse(__pyx_self, ((PyObject *)__pyx_v_text));
	;
	return __pyx_r;
}
/* "_browse.pyx":52
*     return (True, line[len(prefix):])
* 
* def parse(text):             # <<<<<<<<<<<<<<
*     lines = iter(text.split('\n'))
* 
*/
static PyObject *__pyx_pf_7_browse_2parse( PyObject *__pyx_self, PyObject *__pyx_v_text) {
	PyObject *__pyx_v_lines = ((void *)0);
	PyObject *__pyx_v_target = ((void *)0);
	PyObject *__pyx_v_rule = ((void *)0);
	PyObject *__pyx_v_inputs = ((void *)0);
	PyObject *__pyx_v_outputs = ((void *)0);
	PyObject *__pyx_v_line = ((void *)0);
	PyObject *__pyx_v_match = ((void *)0);
	PyObject *__pyx_v_type = ((void *)0);
	PyObject *__pyx_v__ = ((void *)0);
	PyObject *__pyx_r = ((void *)0);
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	PyObject *__pyx_t_3 = ((void *)0);
	PyObject *__pyx_t_4 = ((void *)0);
	PyObject *__pyx_t_5 = ((void *)0);
	PyObject *__pyx_t_6 = ((void *)0);
	PyObject *__pyx_t_7 = ((void *)0);
	PyObject *(*__pyx_t_8)(PyObject *);
	int __pyx_t_9;
	int __pyx_t_10;
	int __pyx_t_11;
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	/* "_browse.pyx":53
* 
* def parse(text):
*     lines = iter(text.split('\n'))             # <<<<<<<<<<<<<<
* 
*     target = None
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_text, __pyx_n_s__split); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; __pyx_clineno = 1108; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_k_tuple_2), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; __pyx_clineno = 1110; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	__pyx_t_1 = PyObject_GetIter(__pyx_t_2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; __pyx_clineno = 1113; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	__pyx_v_lines = __pyx_t_1;
	__pyx_t_1 = 0;
	/* "_browse.pyx":55
*     lines = iter(text.split('\n'))
* 
*     target = None             # <<<<<<<<<<<<<<
*     rule = None
*     inputs = []
*/
	(   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	__pyx_v_target = (&_Py_NoneStruct);
	/* "_browse.pyx":56
* 
*     target = None
*     rule = None             # <<<<<<<<<<<<<<
*     inputs = []
*     outputs = []
*/
	(   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	__pyx_v_rule = (&_Py_NoneStruct);
	/* "_browse.pyx":57
*     target = None
*     rule = None
*     inputs = []             # <<<<<<<<<<<<<<
*     outputs = []
* 
*/
	__pyx_t_1 = PyList_New(0); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 57; __pyx_clineno = 1146; goto __pyx_L1_error;}
	;
	__pyx_v_inputs = __pyx_t_1;
	__pyx_t_1 = 0;
	/* "_browse.pyx":58
*     rule = None
*     inputs = []
*     outputs = []             # <<<<<<<<<<<<<<
* 
*     try:
*/
	__pyx_t_1 = PyList_New(0); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 58; __pyx_clineno = 1158; goto __pyx_L1_error;}
	;
	__pyx_v_outputs = __pyx_t_1;
	__pyx_t_1 = 0;
	/* "_browse.pyx":60
*     outputs = []
* 
*     try:             # <<<<<<<<<<<<<<
*         target = lines.next()[:-1]  # strip trailing colon
* 
*/
	{
		__Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_4, &__pyx_t_5);
		;
		;
		;
		/*try:*/ {
			/* "_browse.pyx":61
* 
*     try:
*         target = lines.next()[:-1]  # strip trailing colon             # <<<<<<<<<<<<<<
* 
*         line = lines.next()
*/
			__pyx_t_1 = PyObject_GetAttr(__pyx_v_lines, __pyx_n_s__next); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; __pyx_clineno = 1184; goto __pyx_L3_error;}
			;
			__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; __pyx_clineno = 1186; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			__pyx_t_1 = PySequence_GetSlice(__pyx_t_2, 0, -1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; __pyx_clineno = 1189; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			do { if (  --((PyObject*)(__pyx_v_target))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_target)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_target)))); } while (0);
			__pyx_v_target = __pyx_t_1;
			__pyx_t_1 = 0;
			/* "_browse.pyx":63
*         target = lines.next()[:-1]  # strip trailing colon
* 
*         line = lines.next()             # <<<<<<<<<<<<<<
*         (match, rule) = match_strip(line, '  input: ')
*         if match:
*/
			__pyx_t_1 = PyObject_GetAttr(__pyx_v_lines, __pyx_n_s__next); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 63; __pyx_clineno = 1203; goto __pyx_L3_error;}
			;
			__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 63; __pyx_clineno = 1205; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			__pyx_v_line = __pyx_t_2;
			__pyx_t_2 = 0;
			/* "_browse.pyx":64
* 
*         line = lines.next()
*         (match, rule) = match_strip(line, '  input: ')             # <<<<<<<<<<<<<<
*         if match:
*             (match, line) = match_strip(lines.next(), '    ')
*/
			__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1218; goto __pyx_L3_error;}
			;
			__pyx_t_1 = PyTuple_New(2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1220; goto __pyx_L3_error;}
			;
			(   ((PyObject*)(__pyx_v_line))->ob_refcnt++);
			(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = __pyx_v_line);
			;
			(   ((PyObject*)(((PyObject *)__pyx_kp_s_3)))->ob_refcnt++);
			(((PyTupleObject *)(__pyx_t_1))->ob_item[1] = ((PyObject *)__pyx_kp_s_3));
			;
			__pyx_t_6 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_1), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1228; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
			if (((((((PyObject*)(__pyx_t_6))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_6))->ob_type) == &PyList_Type))) {
				PyObject* sequence = __pyx_t_6;
				Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
				if ((size != 2)) {
					if (size > 2) __Pyx_RaiseTooManyValuesError(2);
					else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
					{__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1242; goto __pyx_L3_error;}
				}
				if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
					__pyx_t_1 = (((PyTupleObject *)(sequence))->ob_item[0]); 
					__pyx_t_2 = (((PyTupleObject *)(sequence))->ob_item[1]); 
				} else {
					__pyx_t_1 = (((PyListObject *)(sequence))->ob_item[0]); 
					__pyx_t_2 = (((PyListObject *)(sequence))->ob_item[1]); 
				}
				(   ((PyObject*)(__pyx_t_1))->ob_refcnt++);
				(   ((PyObject*)(__pyx_t_2))->ob_refcnt++);
				do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
			} else
			{
				Py_ssize_t index = -1;
				__pyx_t_7 = PyObject_GetIter(__pyx_t_6); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1262; goto __pyx_L3_error;}
				;
				do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
				__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
				index = 0; __pyx_t_1 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_1)) goto __pyx_L11_unpacking_failed;
				;
				index = 1; __pyx_t_2 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_2)) goto __pyx_L11_unpacking_failed;
				;
				if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1270; goto __pyx_L3_error;}
				__pyx_t_8 = ((void *)0);
				do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
				goto __pyx_L12_unpacking_done;
				__pyx_L11_unpacking_failed:;
				do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
				__pyx_t_8 = ((void *)0);
				if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
				{__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; __pyx_clineno = 1278; goto __pyx_L3_error;}
				__pyx_L12_unpacking_done:;
			}
			__pyx_v_match = __pyx_t_1;
			__pyx_t_1 = 0;
			do { if (  --((PyObject*)(__pyx_v_rule))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_rule)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_rule)))); } while (0);
			__pyx_v_rule = __pyx_t_2;
			__pyx_t_2 = 0;
			/* "_browse.pyx":65
*         line = lines.next()
*         (match, rule) = match_strip(line, '  input: ')
*         if match:             # <<<<<<<<<<<<<<
*             (match, line) = match_strip(lines.next(), '    ')
*             while match:
*/
			__pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_v_match); if ((__pyx_t_9 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 65; __pyx_clineno = 1294; goto __pyx_L3_error;}
			if (__pyx_t_9) {
				/* "_browse.pyx":66
*         (match, rule) = match_strip(line, '  input: ')
*         if match:
*             (match, line) = match_strip(lines.next(), '    ')             # <<<<<<<<<<<<<<
*             while match:
*                 type = None
*/
				__pyx_t_6 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1304; goto __pyx_L3_error;}
				;
				__pyx_t_2 = PyObject_GetAttr(__pyx_v_lines, __pyx_n_s__next); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1306; goto __pyx_L3_error;}
				;
				__pyx_t_1 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1308; goto __pyx_L3_error;}
				;
				do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
				__pyx_t_2 = PyTuple_New(2); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1311; goto __pyx_L3_error;}
				;
				(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_t_1);
				;
				(   ((PyObject*)(((PyObject *)__pyx_kp_s_4)))->ob_refcnt++);
				(((PyTupleObject *)(__pyx_t_2))->ob_item[1] = ((PyObject *)__pyx_kp_s_4));
				;
				__pyx_t_1 = 0;
				__pyx_t_1 = PyObject_Call(__pyx_t_6, ((PyObject *)__pyx_t_2), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1319; goto __pyx_L3_error;}
				;
				do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
				do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
				if (((((((PyObject*)(__pyx_t_1))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_1))->ob_type) == &PyList_Type))) {
					PyObject* sequence = __pyx_t_1;
					Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
					if ((size != 2)) {
						if (size > 2) __Pyx_RaiseTooManyValuesError(2);
						else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1333; goto __pyx_L3_error;}
					}
					if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
						__pyx_t_2 = (((PyTupleObject *)(sequence))->ob_item[0]); 
						__pyx_t_6 = (((PyTupleObject *)(sequence))->ob_item[1]); 
					} else {
						__pyx_t_2 = (((PyListObject *)(sequence))->ob_item[0]); 
						__pyx_t_6 = (((PyListObject *)(sequence))->ob_item[1]); 
					}
					(   ((PyObject*)(__pyx_t_2))->ob_refcnt++);
					(   ((PyObject*)(__pyx_t_6))->ob_refcnt++);
					do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
				} else
				{
					Py_ssize_t index = -1;
					__pyx_t_7 = PyObject_GetIter(__pyx_t_1); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1353; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
					__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
					index = 0; __pyx_t_2 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_2)) goto __pyx_L14_unpacking_failed;
					;
					index = 1; __pyx_t_6 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_6)) goto __pyx_L14_unpacking_failed;
					;
					if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1361; goto __pyx_L3_error;}
					__pyx_t_8 = ((void *)0);
					do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
					goto __pyx_L15_unpacking_done;
					__pyx_L14_unpacking_failed:;
					do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
					__pyx_t_8 = ((void *)0);
					if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
					{__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; __pyx_clineno = 1369; goto __pyx_L3_error;}
					__pyx_L15_unpacking_done:;
				}
				do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
				__pyx_v_match = __pyx_t_2;
				__pyx_t_2 = 0;
				do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0);
				__pyx_v_line = __pyx_t_6;
				__pyx_t_6 = 0;
				/* "_browse.pyx":67
*         if match:
*             (match, line) = match_strip(lines.next(), '    ')
*             while match:             # <<<<<<<<<<<<<<
*                 type = None
*                 (match, line) = match_strip(line, '| ')
*/
				while (1) {
					__pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_v_match); if ((__pyx_t_9 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 67; __pyx_clineno = 1387; goto __pyx_L3_error;}
					if (!__pyx_t_9) break;
					/* "_browse.pyx":68
*             (match, line) = match_strip(lines.next(), '    ')
*             while match:
*                 type = None             # <<<<<<<<<<<<<<
*                 (match, line) = match_strip(line, '| ')
*                 if match:
*/
					(   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
					do { if ((__pyx_v_type) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_type)))); } while (0); } while (0);
					__pyx_v_type = (&_Py_NoneStruct);
					/* "_browse.pyx":69
*             while match:
*                 type = None
*                 (match, line) = match_strip(line, '| ')             # <<<<<<<<<<<<<<
*                 if match:
*                     type = 'implicit'
*/
					__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1408; goto __pyx_L3_error;}
					;
					__pyx_t_6 = PyTuple_New(2); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1410; goto __pyx_L3_error;}
					;
					(   ((PyObject*)(__pyx_v_line))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_6))->ob_item[0] = __pyx_v_line);
					;
					(   ((PyObject*)(((PyObject *)__pyx_kp_s_5)))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_6))->ob_item[1] = ((PyObject *)__pyx_kp_s_5));
					;
					__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_t_6), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1418; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
					do { if (  --((PyObject*)(((PyObject *)__pyx_t_6)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_6))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_6))))); } while (0); __pyx_t_6 = 0;
					if (((((((PyObject*)(__pyx_t_2))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_2))->ob_type) == &PyList_Type))) {
						PyObject* sequence = __pyx_t_2;
						Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
						if ((size != 2)) {
							if (size > 2) __Pyx_RaiseTooManyValuesError(2);
							else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
							{__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1432; goto __pyx_L3_error;}
						}
						if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
							__pyx_t_6 = (((PyTupleObject *)(sequence))->ob_item[0]); 
							__pyx_t_1 = (((PyTupleObject *)(sequence))->ob_item[1]); 
						} else {
							__pyx_t_6 = (((PyListObject *)(sequence))->ob_item[0]); 
							__pyx_t_1 = (((PyListObject *)(sequence))->ob_item[1]); 
						}
						(   ((PyObject*)(__pyx_t_6))->ob_refcnt++);
						(   ((PyObject*)(__pyx_t_1))->ob_refcnt++);
						do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
					} else
					{
						Py_ssize_t index = -1;
						__pyx_t_7 = PyObject_GetIter(__pyx_t_2); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1452; goto __pyx_L3_error;}
						;
						do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
						__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
						index = 0; __pyx_t_6 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_6)) goto __pyx_L18_unpacking_failed;
						;
						index = 1; __pyx_t_1 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_1)) goto __pyx_L18_unpacking_failed;
						;
						if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1460; goto __pyx_L3_error;}
						__pyx_t_8 = ((void *)0);
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						goto __pyx_L19_unpacking_done;
						__pyx_L18_unpacking_failed:;
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						__pyx_t_8 = ((void *)0);
						if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 69; __pyx_clineno = 1468; goto __pyx_L3_error;}
						__pyx_L19_unpacking_done:;
					}
					do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
					__pyx_v_match = __pyx_t_6;
					__pyx_t_6 = 0;
					do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0);
					__pyx_v_line = __pyx_t_1;
					__pyx_t_1 = 0;
					/* "_browse.pyx":70
*                 type = None
*                 (match, line) = match_strip(line, '| ')
*                 if match:             # <<<<<<<<<<<<<<
*                     type = 'implicit'
*                 (match, line) = match_strip(line, '|| ')
*/
					__pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_v_match); if ((__pyx_t_9 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 70; __pyx_clineno = 1485; goto __pyx_L3_error;}
					if (__pyx_t_9) {
						/* "_browse.pyx":71
*                 (match, line) = match_strip(line, '| ')
*                 if match:
*                     type = 'implicit'             # <<<<<<<<<<<<<<
*                 (match, line) = match_strip(line, '|| ')
*                 if match:
*/
						(   ((PyObject*)(((PyObject *)__pyx_n_s__implicit)))->ob_refcnt++);
						do { if (  --((PyObject*)(__pyx_v_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_type)))); } while (0);
						__pyx_v_type = ((PyObject *)__pyx_n_s__implicit);
						goto __pyx_L20;
					}
					__pyx_L20:;
					/* "_browse.pyx":72
*                 if match:
*                     type = 'implicit'
*                 (match, line) = match_strip(line, '|| ')             # <<<<<<<<<<<<<<
*                 if match:
*                     type = 'order-only'
*/
					__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1509; goto __pyx_L3_error;}
					;
					__pyx_t_1 = PyTuple_New(2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1511; goto __pyx_L3_error;}
					;
					(   ((PyObject*)(__pyx_v_line))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = __pyx_v_line);
					;
					(   ((PyObject*)(((PyObject *)__pyx_kp_s_6)))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_1))->ob_item[1] = ((PyObject *)__pyx_kp_s_6));
					;
					__pyx_t_6 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_1), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1519; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
					do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
					if (((((((PyObject*)(__pyx_t_6))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_6))->ob_type) == &PyList_Type))) {
						PyObject* sequence = __pyx_t_6;
						Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
						if ((size != 2)) {
							if (size > 2) __Pyx_RaiseTooManyValuesError(2);
							else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
							{__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1533; goto __pyx_L3_error;}
						}
						if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
							__pyx_t_1 = (((PyTupleObject *)(sequence))->ob_item[0]); 
							__pyx_t_2 = (((PyTupleObject *)(sequence))->ob_item[1]); 
						} else {
							__pyx_t_1 = (((PyListObject *)(sequence))->ob_item[0]); 
							__pyx_t_2 = (((PyListObject *)(sequence))->ob_item[1]); 
						}
						(   ((PyObject*)(__pyx_t_1))->ob_refcnt++);
						(   ((PyObject*)(__pyx_t_2))->ob_refcnt++);
						do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
					} else
					{
						Py_ssize_t index = -1;
						__pyx_t_7 = PyObject_GetIter(__pyx_t_6); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1553; goto __pyx_L3_error;}
						;
						do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
						__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
						index = 0; __pyx_t_1 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_1)) goto __pyx_L21_unpacking_failed;
						;
						index = 1; __pyx_t_2 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_2)) goto __pyx_L21_unpacking_failed;
						;
						if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1561; goto __pyx_L3_error;}
						__pyx_t_8 = ((void *)0);
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						goto __pyx_L22_unpacking_done;
						__pyx_L21_unpacking_failed:;
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						__pyx_t_8 = ((void *)0);
						if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 72; __pyx_clineno = 1569; goto __pyx_L3_error;}
						__pyx_L22_unpacking_done:;
					}
					do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
					__pyx_v_match = __pyx_t_1;
					__pyx_t_1 = 0;
					do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0);
					__pyx_v_line = __pyx_t_2;
					__pyx_t_2 = 0;
					/* "_browse.pyx":73
*                     type = 'implicit'
*                 (match, line) = match_strip(line, '|| ')
*                 if match:             # <<<<<<<<<<<<<<
*                     type = 'order-only'
*                 inputs.append((line, type))
*/
					__pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_v_match); if ((__pyx_t_9 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 73; __pyx_clineno = 1586; goto __pyx_L3_error;}
					if (__pyx_t_9) {
						/* "_browse.pyx":74
*                 (match, line) = match_strip(line, '|| ')
*                 if match:
*                     type = 'order-only'             # <<<<<<<<<<<<<<
*                 inputs.append((line, type))
*                 (match, line) = match_strip(lines.next(), '    ')
*/
						(   ((PyObject*)(((PyObject *)__pyx_kp_s_7)))->ob_refcnt++);
						do { if (  --((PyObject*)(__pyx_v_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_type)))); } while (0);
						__pyx_v_type = ((PyObject *)__pyx_kp_s_7);
						goto __pyx_L23;
					}
					__pyx_L23:;
					/* "_browse.pyx":75
*                 if match:
*                     type = 'order-only'
*                 inputs.append((line, type))             # <<<<<<<<<<<<<<
*                 (match, line) = match_strip(lines.next(), '    ')
* 
*/
					__pyx_t_6 = PyTuple_New(2); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 75; __pyx_clineno = 1610; goto __pyx_L3_error;}
					;
					(   ((PyObject*)(__pyx_v_line))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_6))->ob_item[0] = __pyx_v_line);
					;
					(   ((PyObject*)(__pyx_v_type))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_6))->ob_item[1] = __pyx_v_type);
					;
					__pyx_t_10 = PyList_Append(__pyx_v_inputs, ((PyObject *)__pyx_t_6)); if ((__pyx_t_10 == -1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 75; __pyx_clineno = 1618; goto __pyx_L3_error;}
					do { if (  --((PyObject*)(((PyObject *)__pyx_t_6)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_6))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_6))))); } while (0); __pyx_t_6 = 0;
					/* "_browse.pyx":76
*                     type = 'order-only'
*                 inputs.append((line, type))
*                 (match, line) = match_strip(lines.next(), '    ')             # <<<<<<<<<<<<<<
* 
*         match, _ = match_strip(line, '  outputs:')
*/
					__pyx_t_6 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1628; goto __pyx_L3_error;}
					;
					__pyx_t_2 = PyObject_GetAttr(__pyx_v_lines, __pyx_n_s__next); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1630; goto __pyx_L3_error;}
					;
					__pyx_t_1 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1632; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
					__pyx_t_2 = PyTuple_New(2); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1635; goto __pyx_L3_error;}
					;
					(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_t_1);
					;
					(   ((PyObject*)(((PyObject *)__pyx_kp_s_4)))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_2))->ob_item[1] = ((PyObject *)__pyx_kp_s_4));
					;
					__pyx_t_1 = 0;
					__pyx_t_1 = PyObject_Call(__pyx_t_6, ((PyObject *)__pyx_t_2), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1643; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
					do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
					if (((((((PyObject*)(__pyx_t_1))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_1))->ob_type) == &PyList_Type))) {
						PyObject* sequence = __pyx_t_1;
						Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
						if ((size != 2)) {
							if (size > 2) __Pyx_RaiseTooManyValuesError(2);
							else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
							{__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1657; goto __pyx_L3_error;}
						}
						if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
							__pyx_t_2 = (((PyTupleObject *)(sequence))->ob_item[0]); 
							__pyx_t_6 = (((PyTupleObject *)(sequence))->ob_item[1]); 
						} else {
							__pyx_t_2 = (((PyListObject *)(sequence))->ob_item[0]); 
							__pyx_t_6 = (((PyListObject *)(sequence))->ob_item[1]); 
						}
						(   ((PyObject*)(__pyx_t_2))->ob_refcnt++);
						(   ((PyObject*)(__pyx_t_6))->ob_refcnt++);
						do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
					} else
					{
						Py_ssize_t index = -1;
						__pyx_t_7 = PyObject_GetIter(__pyx_t_1); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1677; goto __pyx_L3_error;}
						;
						do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
						__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
						index = 0; __pyx_t_2 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_2)) goto __pyx_L24_unpacking_failed;
						;
						index = 1; __pyx_t_6 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_6)) goto __pyx_L24_unpacking_failed;
						;
						if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1685; goto __pyx_L3_error;}
						__pyx_t_8 = ((void *)0);
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						goto __pyx_L25_unpacking_done;
						__pyx_L24_unpacking_failed:;
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						__pyx_t_8 = ((void *)0);
						if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 76; __pyx_clineno = 1693; goto __pyx_L3_error;}
						__pyx_L25_unpacking_done:;
					}
					do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
					__pyx_v_match = __pyx_t_2;
					__pyx_t_2 = 0;
					do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0);
					__pyx_v_line = __pyx_t_6;
					__pyx_t_6 = 0;
				}
				goto __pyx_L13;
			}
			__pyx_L13:;
			/* "_browse.pyx":78
*                 (match, line) = match_strip(lines.next(), '    ')
* 
*         match, _ = match_strip(line, '  outputs:')             # <<<<<<<<<<<<<<
*         if match:
*             (match, line) = match_strip(lines.next(), '    ')
*/
			__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1714; goto __pyx_L3_error;}
			;
			__pyx_t_6 = PyTuple_New(2); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1716; goto __pyx_L3_error;}
			;
			(   ((PyObject*)(__pyx_v_line))->ob_refcnt++);
			(((PyTupleObject *)(__pyx_t_6))->ob_item[0] = __pyx_v_line);
			;
			(   ((PyObject*)(((PyObject *)__pyx_kp_s_8)))->ob_refcnt++);
			(((PyTupleObject *)(__pyx_t_6))->ob_item[1] = ((PyObject *)__pyx_kp_s_8));
			;
			__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_t_6), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1724; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_6)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_6))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_6))))); } while (0); __pyx_t_6 = 0;
			if (((((((PyObject*)(__pyx_t_2))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_2))->ob_type) == &PyList_Type))) {
				PyObject* sequence = __pyx_t_2;
				Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
				if ((size != 2)) {
					if (size > 2) __Pyx_RaiseTooManyValuesError(2);
					else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
					{__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1738; goto __pyx_L3_error;}
				}
				if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
					__pyx_t_6 = (((PyTupleObject *)(sequence))->ob_item[0]); 
					__pyx_t_1 = (((PyTupleObject *)(sequence))->ob_item[1]); 
				} else {
					__pyx_t_6 = (((PyListObject *)(sequence))->ob_item[0]); 
					__pyx_t_1 = (((PyListObject *)(sequence))->ob_item[1]); 
				}
				(   ((PyObject*)(__pyx_t_6))->ob_refcnt++);
				(   ((PyObject*)(__pyx_t_1))->ob_refcnt++);
				do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			} else
			{
				Py_ssize_t index = -1;
				__pyx_t_7 = PyObject_GetIter(__pyx_t_2); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1758; goto __pyx_L3_error;}
				;
				do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
				__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
				index = 0; __pyx_t_6 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_6)) goto __pyx_L26_unpacking_failed;
				;
				index = 1; __pyx_t_1 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_1)) goto __pyx_L26_unpacking_failed;
				;
				if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1766; goto __pyx_L3_error;}
				__pyx_t_8 = ((void *)0);
				do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
				goto __pyx_L27_unpacking_done;
				__pyx_L26_unpacking_failed:;
				do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
				__pyx_t_8 = ((void *)0);
				if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
				{__pyx_filename = __pyx_f[0]; __pyx_lineno = 78; __pyx_clineno = 1774; goto __pyx_L3_error;}
				__pyx_L27_unpacking_done:;
			}
			do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
			__pyx_v_match = __pyx_t_6;
			__pyx_t_6 = 0;
			__pyx_v__ = __pyx_t_1;
			__pyx_t_1 = 0;
			/* "_browse.pyx":79
* 
*         match, _ = match_strip(line, '  outputs:')
*         if match:             # <<<<<<<<<<<<<<
*             (match, line) = match_strip(lines.next(), '    ')
*             while match:
*/
			__pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_v_match); if ((__pyx_t_9 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; __pyx_clineno = 1790; goto __pyx_L3_error;}
			if (__pyx_t_9) {
				/* "_browse.pyx":80
*         match, _ = match_strip(line, '  outputs:')
*         if match:
*             (match, line) = match_strip(lines.next(), '    ')             # <<<<<<<<<<<<<<
*             while match:
*                 outputs.append(line)
*/
				__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1800; goto __pyx_L3_error;}
				;
				__pyx_t_1 = PyObject_GetAttr(__pyx_v_lines, __pyx_n_s__next); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1802; goto __pyx_L3_error;}
				;
				__pyx_t_6 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1804; goto __pyx_L3_error;}
				;
				do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
				__pyx_t_1 = PyTuple_New(2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1807; goto __pyx_L3_error;}
				;
				(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = __pyx_t_6);
				;
				(   ((PyObject*)(((PyObject *)__pyx_kp_s_4)))->ob_refcnt++);
				(((PyTupleObject *)(__pyx_t_1))->ob_item[1] = ((PyObject *)__pyx_kp_s_4));
				;
				__pyx_t_6 = 0;
				__pyx_t_6 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_1), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1815; goto __pyx_L3_error;}
				;
				do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
				do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
				if (((((((PyObject*)(__pyx_t_6))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_6))->ob_type) == &PyList_Type))) {
					PyObject* sequence = __pyx_t_6;
					Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
					if ((size != 2)) {
						if (size > 2) __Pyx_RaiseTooManyValuesError(2);
						else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1829; goto __pyx_L3_error;}
					}
					if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
						__pyx_t_1 = (((PyTupleObject *)(sequence))->ob_item[0]); 
						__pyx_t_2 = (((PyTupleObject *)(sequence))->ob_item[1]); 
					} else {
						__pyx_t_1 = (((PyListObject *)(sequence))->ob_item[0]); 
						__pyx_t_2 = (((PyListObject *)(sequence))->ob_item[1]); 
					}
					(   ((PyObject*)(__pyx_t_1))->ob_refcnt++);
					(   ((PyObject*)(__pyx_t_2))->ob_refcnt++);
					do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
				} else
				{
					Py_ssize_t index = -1;
					__pyx_t_7 = PyObject_GetIter(__pyx_t_6); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1849; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
					__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
					index = 0; __pyx_t_1 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_1)) goto __pyx_L29_unpacking_failed;
					;
					index = 1; __pyx_t_2 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_2)) goto __pyx_L29_unpacking_failed;
					;
					if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1857; goto __pyx_L3_error;}
					__pyx_t_8 = ((void *)0);
					do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
					goto __pyx_L30_unpacking_done;
					__pyx_L29_unpacking_failed:;
					do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
					__pyx_t_8 = ((void *)0);
					if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
					{__pyx_filename = __pyx_f[0]; __pyx_lineno = 80; __pyx_clineno = 1865; goto __pyx_L3_error;}
					__pyx_L30_unpacking_done:;
				}
				do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
				__pyx_v_match = __pyx_t_1;
				__pyx_t_1 = 0;
				do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0);
				__pyx_v_line = __pyx_t_2;
				__pyx_t_2 = 0;
				/* "_browse.pyx":81
*         if match:
*             (match, line) = match_strip(lines.next(), '    ')
*             while match:             # <<<<<<<<<<<<<<
*                 outputs.append(line)
*                 (match, line) = match_strip(lines.next(), '    ')
*/
				while (1) {
					__pyx_t_9 = __Pyx_PyObject_IsTrue(__pyx_v_match); if ((__pyx_t_9 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 81; __pyx_clineno = 1883; goto __pyx_L3_error;}
					if (!__pyx_t_9) break;
					/* "_browse.pyx":82
*             (match, line) = match_strip(lines.next(), '    ')
*             while match:
*                 outputs.append(line)             # <<<<<<<<<<<<<<
*                 (match, line) = match_strip(lines.next(), '    ')
*     except StopIteration:
*/
					__pyx_t_10 = PyList_Append(__pyx_v_outputs, __pyx_v_line); if ((__pyx_t_10 == -1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 82; __pyx_clineno = 1893; goto __pyx_L3_error;}
					/* "_browse.pyx":83
*             while match:
*                 outputs.append(line)
*                 (match, line) = match_strip(lines.next(), '    ')             # <<<<<<<<<<<<<<
*     except StopIteration:
*         pass
*/
					__pyx_t_6 = __Pyx_GetName(__pyx_m, __pyx_n_s__match_strip); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1902; goto __pyx_L3_error;}
					;
					__pyx_t_2 = PyObject_GetAttr(__pyx_v_lines, __pyx_n_s__next); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1904; goto __pyx_L3_error;}
					;
					__pyx_t_1 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1906; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
					__pyx_t_2 = PyTuple_New(2); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1909; goto __pyx_L3_error;}
					;
					(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_t_1);
					;
					(   ((PyObject*)(((PyObject *)__pyx_kp_s_4)))->ob_refcnt++);
					(((PyTupleObject *)(__pyx_t_2))->ob_item[1] = ((PyObject *)__pyx_kp_s_4));
					;
					__pyx_t_1 = 0;
					__pyx_t_1 = PyObject_Call(__pyx_t_6, ((PyObject *)__pyx_t_2), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1917; goto __pyx_L3_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
					do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
					if (((((((PyObject*)(__pyx_t_1))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_1))->ob_type) == &PyList_Type))) {
						PyObject* sequence = __pyx_t_1;
						Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
						if ((size != 2)) {
							if (size > 2) __Pyx_RaiseTooManyValuesError(2);
							else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
							{__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1931; goto __pyx_L3_error;}
						}
						if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
							__pyx_t_2 = (((PyTupleObject *)(sequence))->ob_item[0]); 
							__pyx_t_6 = (((PyTupleObject *)(sequence))->ob_item[1]); 
						} else {
							__pyx_t_2 = (((PyListObject *)(sequence))->ob_item[0]); 
							__pyx_t_6 = (((PyListObject *)(sequence))->ob_item[1]); 
						}
						(   ((PyObject*)(__pyx_t_2))->ob_refcnt++);
						(   ((PyObject*)(__pyx_t_6))->ob_refcnt++);
						do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
					} else
					{
						Py_ssize_t index = -1;
						__pyx_t_7 = PyObject_GetIter(__pyx_t_1); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1951; goto __pyx_L3_error;}
						;
						do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
						__pyx_t_8 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
						index = 0; __pyx_t_2 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_2)) goto __pyx_L33_unpacking_failed;
						;
						index = 1; __pyx_t_6 = __pyx_t_8(__pyx_t_7); if ((!__pyx_t_6)) goto __pyx_L33_unpacking_failed;
						;
						if (__Pyx_IternextUnpackEndCheck(__pyx_t_8(__pyx_t_7), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1959; goto __pyx_L3_error;}
						__pyx_t_8 = ((void *)0);
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						goto __pyx_L34_unpacking_done;
						__pyx_L33_unpacking_failed:;
						do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
						__pyx_t_8 = ((void *)0);
						if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; __pyx_clineno = 1967; goto __pyx_L3_error;}
						__pyx_L34_unpacking_done:;
					}
					do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0);
					__pyx_v_match = __pyx_t_2;
					__pyx_t_2 = 0;
					do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0);
					__pyx_v_line = __pyx_t_6;
					__pyx_t_6 = 0;
				}
				goto __pyx_L28;
			}
			__pyx_L28:;
		}
		do { if ((__pyx_t_3) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); } while (0); __pyx_t_3 = 0;
		do { if ((__pyx_t_4) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); } while (0); __pyx_t_4 = 0;
		do { if ((__pyx_t_5) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_5))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_5)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_5)))); } while (0); } while (0); __pyx_t_5 = 0;
		goto __pyx_L10_try_end;
		__pyx_L3_error:;
		do { if ((__pyx_t_7) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); } while (0); __pyx_t_7 = 0;
		do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0); __pyx_t_2 = 0;
		do { if ((__pyx_t_6) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); } while (0); __pyx_t_6 = 0;
		do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0); __pyx_t_1 = 0;
		/* "_browse.pyx":84
*                 outputs.append(line)
*                 (match, line) = match_strip(lines.next(), '    ')
*     except StopIteration:             # <<<<<<<<<<<<<<
*         pass
* 
*/
		__pyx_t_11 = PyErr_ExceptionMatches(__pyx_builtin_StopIteration);
		if (__pyx_t_11) {
			PyErr_Restore(0,0,0);
			goto __pyx_L4_exception_handled;
		}
		;
		;
		;
		__Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
		goto __pyx_L1_error;
		__pyx_L4_exception_handled:;
		;
		;
		;
		__Pyx_ExceptionReset(__pyx_t_3, __pyx_t_4, __pyx_t_5);
		__pyx_L10_try_end:;
	}
	/* "_browse.pyx":87
*         pass
* 
*     return Node(inputs, rule, target, outputs)             # <<<<<<<<<<<<<<
* 
* def generate_html(node):
*/
	do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
	__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__Node); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; __pyx_clineno = 2024; goto __pyx_L1_error;}
	;
	__pyx_t_6 = PyTuple_New(4); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; __pyx_clineno = 2026; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_v_inputs)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_6))->ob_item[0] = ((PyObject *)__pyx_v_inputs));
	;
	(   ((PyObject*)(__pyx_v_rule))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_6))->ob_item[1] = __pyx_v_rule);
	;
	(   ((PyObject*)(__pyx_v_target))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_6))->ob_item[2] = __pyx_v_target);
	;
	(   ((PyObject*)(((PyObject *)__pyx_v_outputs)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_6))->ob_item[3] = ((PyObject *)__pyx_v_outputs));
	;
	__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_t_6), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 87; __pyx_clineno = 2040; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_6)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_6))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_6))))); } while (0); __pyx_t_6 = 0;
	__pyx_r = __pyx_t_2;
	__pyx_t_2 = 0;
	goto __pyx_L0;
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_6) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); } while (0);
	do { if ((__pyx_t_7) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); } while (0);
	__Pyx_AddTraceback("_browse.parse", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = ((void *)0);
	__pyx_L0:;
	do { if ((__pyx_v_lines) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_lines))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_lines)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_lines)))); } while (0); } while (0);
	do { if ((__pyx_v_target) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_target))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_target)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_target)))); } while (0); } while (0);
	do { if ((__pyx_v_rule) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_rule))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_rule)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_rule)))); } while (0); } while (0);
	do { if ((__pyx_v_inputs) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_inputs))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_inputs)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_inputs)))); } while (0); } while (0);
	do { if ((__pyx_v_outputs) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_outputs))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_outputs)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_outputs)))); } while (0); } while (0);
	do { if ((__pyx_v_line) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_line))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_line)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_line)))); } while (0); } while (0);
	do { if ((__pyx_v_match) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_match))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_match)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_match)))); } while (0); } while (0);
	do { if ((__pyx_v_type) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_type)))); } while (0); } while (0);
	do { if ((__pyx_v__) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v__))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v__)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v__)))); } while (0); } while (0);
	;
	;
	return __pyx_r;
}
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_5generate_html(PyObject *__pyx_self, PyObject *__pyx_v_node); /*proto*/
static PyMethodDef __pyx_mdef_7_browse_5generate_html = {("generate_html"), (PyCFunction)__pyx_pw_7_browse_5generate_html, 0x0008, (0)};
static PyObject *__pyx_pw_7_browse_5generate_html(PyObject *__pyx_self, PyObject *__pyx_v_node) {
	PyObject *__pyx_r = 0;
	;
	__pyx_r = __pyx_pf_7_browse_4generate_html(__pyx_self, ((PyObject *)__pyx_v_node));
	;
	return __pyx_r;
}
/* "_browse.pyx":89
*     return Node(inputs, rule, target, outputs)
* 
* def generate_html(node):             # <<<<<<<<<<<<<<
*     print '''<!DOCTYPE html>
* <style>
*/
static PyObject *__pyx_pf_7_browse_4generate_html( PyObject *__pyx_self, PyObject *__pyx_v_node) {
	PyObject *__pyx_v_input = ((void *)0);
	PyObject *__pyx_v_type = ((void *)0);
	PyObject *__pyx_v_extra = ((void *)0);
	PyObject *__pyx_v_output = ((void *)0);
	PyObject *__pyx_r = ((void *)0);
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	int __pyx_t_3;
	Py_ssize_t __pyx_t_4;
	PyObject *(*__pyx_t_5)(PyObject *);
	PyObject *__pyx_t_6 = ((void *)0);
	PyObject *__pyx_t_7 = ((void *)0);
	PyObject *__pyx_t_8 = ((void *)0);
	PyObject *(*__pyx_t_9)(PyObject *);
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	/* "_browse.pyx":90
* 
* def generate_html(node):
*     print '''<!DOCTYPE html>             # <<<<<<<<<<<<<<
* <style>
* body {
*/
	if (__Pyx_PrintOne(0, ((PyObject *)__pyx_kp_s_9)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 90; __pyx_clineno = 2120; goto __pyx_L1_error;}
	/* "_browse.pyx":116
* </style>'''
* 
*     print '<h1><tt>%s</tt></h1>' % node.target             # <<<<<<<<<<<<<<
* 
*     if node.inputs:
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__target); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; __pyx_clineno = 2129; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_10), __pyx_t_1); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; __pyx_clineno = 2131; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	if (__Pyx_PrintOne(0, ((PyObject *)__pyx_t_2)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 116; __pyx_clineno = 2134; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
	/* "_browse.pyx":118
*     print '<h1><tt>%s</tt></h1>' % node.target
* 
*     if node.inputs:             # <<<<<<<<<<<<<<
*         print '<h2>target is built using rule <tt>%s</tt> of</h2>' % node.rule
*         if len(node.inputs) > 0:
*/
	__pyx_t_2 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__inputs); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; __pyx_clineno = 2144; goto __pyx_L1_error;}
	;
	__pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if ((__pyx_t_3 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 118; __pyx_clineno = 2146; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	if (__pyx_t_3) {
		/* "_browse.pyx":119
* 
*     if node.inputs:
*         print '<h2>target is built using rule <tt>%s</tt> of</h2>' % node.rule             # <<<<<<<<<<<<<<
*         if len(node.inputs) > 0:
*             print '<div class=filelist>'
*/
		__pyx_t_2 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__rule); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; __pyx_clineno = 2157; goto __pyx_L1_error;}
		;
		__pyx_t_1 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_11), __pyx_t_2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; __pyx_clineno = 2159; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		if (__Pyx_PrintOne(0, ((PyObject *)__pyx_t_1)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 119; __pyx_clineno = 2162; goto __pyx_L1_error;}
		do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
		/* "_browse.pyx":120
*     if node.inputs:
*         print '<h2>target is built using rule <tt>%s</tt> of</h2>' % node.rule
*         if len(node.inputs) > 0:             # <<<<<<<<<<<<<<
*             print '<div class=filelist>'
*             for input, type in sorted(node.inputs):
*/
		__pyx_t_1 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__inputs); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; __pyx_clineno = 2172; goto __pyx_L1_error;}
		;
		__pyx_t_4 = PyObject_Size(__pyx_t_1); if ((__pyx_t_4 == -1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 120; __pyx_clineno = 2174; goto __pyx_L1_error;}
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		__pyx_t_3 = (__pyx_t_4 > 0);
		if (__pyx_t_3) {
			/* "_browse.pyx":121
*         print '<h2>target is built using rule <tt>%s</tt> of</h2>' % node.rule
*         if len(node.inputs) > 0:
*             print '<div class=filelist>'             # <<<<<<<<<<<<<<
*             for input, type in sorted(node.inputs):
*                 extra = ''
*/
			if (__Pyx_PrintOne(0, ((PyObject *)__pyx_kp_s_12)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 121; __pyx_clineno = 2186; goto __pyx_L1_error;}
			/* "_browse.pyx":122
*         if len(node.inputs) > 0:
*             print '<div class=filelist>'
*             for input, type in sorted(node.inputs):             # <<<<<<<<<<<<<<
*                 extra = ''
*                 if type:
*/
			__pyx_t_1 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__inputs); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2195; goto __pyx_L1_error;}
			;
			__pyx_t_2 = PyTuple_New(1); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2197; goto __pyx_L1_error;}
			;
			(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_t_1);
			;
			__pyx_t_1 = 0;
			__pyx_t_1 = PyObject_Call(__pyx_builtin_sorted, ((PyObject *)__pyx_t_2), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2202; goto __pyx_L1_error;}
			;
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
			if (((((PyObject*)(__pyx_t_1))->ob_type) == &PyList_Type) || ((((PyObject*)(__pyx_t_1))->ob_type) == &PyTuple_Type)) {
				__pyx_t_2 = __pyx_t_1; (   ((PyObject*)(__pyx_t_2))->ob_refcnt++); __pyx_t_4 = 0;
				__pyx_t_5 = ((void *)0);
			} else {
				__pyx_t_4 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2209; goto __pyx_L1_error;}
				;
				__pyx_t_5 = (((PyObject*)(__pyx_t_2))->ob_type)->tp_iternext;
			}
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			for (;;) {
				if (!__pyx_t_5 && ((((PyObject*)(__pyx_t_2))->ob_type) == &PyList_Type)) {
					if (__pyx_t_4 >= (((PyVarObject*)(__pyx_t_2))->ob_size)) break;
					__pyx_t_1 = (((PyListObject *)(__pyx_t_2))->ob_item[__pyx_t_4]); (   ((PyObject*)(__pyx_t_1))->ob_refcnt++); __pyx_t_4++;
				} else if (!__pyx_t_5 && ((((PyObject*)(__pyx_t_2))->ob_type) == &PyTuple_Type)) {
					if (__pyx_t_4 >= (((PyVarObject*)(__pyx_t_2))->ob_size)) break;
					__pyx_t_1 = (((PyTupleObject *)(__pyx_t_2))->ob_item[__pyx_t_4]); (   ((PyObject*)(__pyx_t_1))->ob_refcnt++); __pyx_t_4++;
				} else {
					__pyx_t_1 = __pyx_t_5(__pyx_t_2);
					if ((!__pyx_t_1)) {
						if (PyErr_Occurred()) {
							if ((PyErr_ExceptionMatches(PyExc_StopIteration))) PyErr_Clear();
							else {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2234; goto __pyx_L1_error;}
						}
						break;
					}
					;
				}
				if (((((((PyObject*)(__pyx_t_1))->ob_type) == &PyTuple_Type))) || (((((PyObject*)(__pyx_t_1))->ob_type) == &PyList_Type))) {
					PyObject* sequence = __pyx_t_1;
					Py_ssize_t size = (((PyVarObject*)(sequence))->ob_size);
					if ((size != 2)) {
						if (size > 2) __Pyx_RaiseTooManyValuesError(2);
						else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
						{__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2250; goto __pyx_L1_error;}
					}
					if ((((((PyObject*)(sequence))->ob_type) == &PyTuple_Type))) {
						__pyx_t_6 = (((PyTupleObject *)(sequence))->ob_item[0]); 
						__pyx_t_7 = (((PyTupleObject *)(sequence))->ob_item[1]); 
					} else {
						__pyx_t_6 = (((PyListObject *)(sequence))->ob_item[0]); 
						__pyx_t_7 = (((PyListObject *)(sequence))->ob_item[1]); 
					}
					(   ((PyObject*)(__pyx_t_6))->ob_refcnt++);
					(   ((PyObject*)(__pyx_t_7))->ob_refcnt++);
					do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
				} else
				{
					Py_ssize_t index = -1;
					__pyx_t_8 = PyObject_GetIter(__pyx_t_1); if ((!__pyx_t_8)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2270; goto __pyx_L1_error;}
					;
					do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
					__pyx_t_9 = (((PyObject*)(__pyx_t_8))->ob_type)->tp_iternext;
					index = 0; __pyx_t_6 = __pyx_t_9(__pyx_t_8); if ((!__pyx_t_6)) goto __pyx_L7_unpacking_failed;
					;
					index = 1; __pyx_t_7 = __pyx_t_9(__pyx_t_8); if ((!__pyx_t_7)) goto __pyx_L7_unpacking_failed;
					;
					if (__Pyx_IternextUnpackEndCheck(__pyx_t_9(__pyx_t_8), 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2278; goto __pyx_L1_error;}
					__pyx_t_9 = ((void *)0);
					do { if (  --((PyObject*)(__pyx_t_8))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_8)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_8)))); } while (0); __pyx_t_8 = 0;
					goto __pyx_L8_unpacking_done;
					__pyx_L7_unpacking_failed:;
					do { if (  --((PyObject*)(__pyx_t_8))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_8)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_8)))); } while (0); __pyx_t_8 = 0;
					__pyx_t_9 = ((void *)0);
					if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
					{__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 2286; goto __pyx_L1_error;}
					__pyx_L8_unpacking_done:;
				}
				do { if ((__pyx_v_input) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_input))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_input)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_input)))); } while (0); } while (0);
				__pyx_v_input = __pyx_t_6;
				__pyx_t_6 = 0;
				do { if ((__pyx_v_type) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_type)))); } while (0); } while (0);
				__pyx_v_type = __pyx_t_7;
				__pyx_t_7 = 0;
				/* "_browse.pyx":123
*             print '<div class=filelist>'
*             for input, type in sorted(node.inputs):
*                 extra = ''             # <<<<<<<<<<<<<<
*                 if type:
*                     extra = ' (%s)' % type
*/
				(   ((PyObject*)(((PyObject *)__pyx_kp_s_13)))->ob_refcnt++);
				do { if ((__pyx_v_extra) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_extra))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_extra)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_extra)))); } while (0); } while (0);
				__pyx_v_extra = ((PyObject *)__pyx_kp_s_13);
				/* "_browse.pyx":124
*             for input, type in sorted(node.inputs):
*                 extra = ''
*                 if type:             # <<<<<<<<<<<<<<
*                     extra = ' (%s)' % type
*                 print '<tt><a href="?%s">%s</a>%s</tt><br>' % (input, input, extra)
*/
				__pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_v_type); if ((__pyx_t_3 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 124; __pyx_clineno = 2314; goto __pyx_L1_error;}
				if (__pyx_t_3) {
					/* "_browse.pyx":125
*                 extra = ''
*                 if type:
*                     extra = ' (%s)' % type             # <<<<<<<<<<<<<<
*                 print '<tt><a href="?%s">%s</a>%s</tt><br>' % (input, input, extra)
*             print '</div>'
*/
					__pyx_t_1 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_14), __pyx_v_type); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 125; __pyx_clineno = 2324; goto __pyx_L1_error;}
					;
					do { if (  --((PyObject*)(__pyx_v_extra))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_extra)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_extra)))); } while (0);
					__pyx_v_extra = ((PyObject *)__pyx_t_1);
					__pyx_t_1 = 0;
					goto __pyx_L9;
				}
				__pyx_L9:;
				/* "_browse.pyx":126
*                 if type:
*                     extra = ' (%s)' % type
*                 print '<tt><a href="?%s">%s</a>%s</tt><br>' % (input, input, extra)             # <<<<<<<<<<<<<<
*             print '</div>'
* 
*/
				__pyx_t_1 = PyTuple_New(3); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; __pyx_clineno = 2340; goto __pyx_L1_error;}
				;
				(   ((PyObject*)(__pyx_v_input))->ob_refcnt++);
				(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = __pyx_v_input);
				;
				(   ((PyObject*)(__pyx_v_input))->ob_refcnt++);
				(((PyTupleObject *)(__pyx_t_1))->ob_item[1] = __pyx_v_input);
				;
				(   ((PyObject*)(__pyx_v_extra))->ob_refcnt++);
				(((PyTupleObject *)(__pyx_t_1))->ob_item[2] = __pyx_v_extra);
				;
				__pyx_t_7 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_15), ((PyObject *)__pyx_t_1)); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; __pyx_clineno = 2351; goto __pyx_L1_error;}
				;
				do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
				if (__Pyx_PrintOne(0, ((PyObject *)__pyx_t_7)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 126; __pyx_clineno = 2354; goto __pyx_L1_error;}
				do { if (  --((PyObject*)(((PyObject *)__pyx_t_7)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_7))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_7))))); } while (0); __pyx_t_7 = 0;
			}
			do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			/* "_browse.pyx":127
*                     extra = ' (%s)' % type
*                 print '<tt><a href="?%s">%s</a>%s</tt><br>' % (input, input, extra)
*             print '</div>'             # <<<<<<<<<<<<<<
* 
*     if node.outputs:
*/
			if (__Pyx_PrintOne(0, ((PyObject *)__pyx_kp_s_16)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 127; __pyx_clineno = 2366; goto __pyx_L1_error;}
			goto __pyx_L4;
		}
		__pyx_L4:;
		goto __pyx_L3;
	}
	__pyx_L3:;
	/* "_browse.pyx":129
*             print '</div>'
* 
*     if node.outputs:             # <<<<<<<<<<<<<<
*         print '<h2>dependent edges build:</h2>'
*         print '<div class=filelist>'
*/
	__pyx_t_2 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__outputs); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 129; __pyx_clineno = 2381; goto __pyx_L1_error;}
	;
	__pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_2); if ((__pyx_t_3 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 129; __pyx_clineno = 2383; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	if (__pyx_t_3) {
		/* "_browse.pyx":130
* 
*     if node.outputs:
*         print '<h2>dependent edges build:</h2>'             # <<<<<<<<<<<<<<
*         print '<div class=filelist>'
*         for output in sorted(node.outputs):
*/
		if (__Pyx_PrintOne(0, ((PyObject *)__pyx_kp_s_17)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 130; __pyx_clineno = 2394; goto __pyx_L1_error;}
		/* "_browse.pyx":131
*     if node.outputs:
*         print '<h2>dependent edges build:</h2>'
*         print '<div class=filelist>'             # <<<<<<<<<<<<<<
*         for output in sorted(node.outputs):
*             print '<tt><a href="?%s">%s</a></tt><br>' % (output, output)
*/
		if (__Pyx_PrintOne(0, ((PyObject *)__pyx_kp_s_12)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 131; __pyx_clineno = 2403; goto __pyx_L1_error;}
		/* "_browse.pyx":132
*         print '<h2>dependent edges build:</h2>'
*         print '<div class=filelist>'
*         for output in sorted(node.outputs):             # <<<<<<<<<<<<<<
*             print '<tt><a href="?%s">%s</a></tt><br>' % (output, output)
*         print '</div>'
*/
		__pyx_t_2 = PyObject_GetAttr(__pyx_v_node, __pyx_n_s__outputs); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; __pyx_clineno = 2412; goto __pyx_L1_error;}
		;
		__pyx_t_7 = PyTuple_New(1); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; __pyx_clineno = 2414; goto __pyx_L1_error;}
		;
		(((PyTupleObject *)(__pyx_t_7))->ob_item[0] = __pyx_t_2);
		;
		__pyx_t_2 = 0;
		__pyx_t_2 = PyObject_Call(__pyx_builtin_sorted, ((PyObject *)__pyx_t_7), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; __pyx_clineno = 2419; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(((PyObject *)__pyx_t_7)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_7))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_7))))); } while (0); __pyx_t_7 = 0;
		if (((((PyObject*)(__pyx_t_2))->ob_type) == &PyList_Type) || ((((PyObject*)(__pyx_t_2))->ob_type) == &PyTuple_Type)) {
			__pyx_t_7 = __pyx_t_2; (   ((PyObject*)(__pyx_t_7))->ob_refcnt++); __pyx_t_4 = 0;
			__pyx_t_5 = ((void *)0);
		} else {
			__pyx_t_4 = -1; __pyx_t_7 = PyObject_GetIter(__pyx_t_2); if ((!__pyx_t_7)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; __pyx_clineno = 2426; goto __pyx_L1_error;}
			;
			__pyx_t_5 = (((PyObject*)(__pyx_t_7))->ob_type)->tp_iternext;
		}
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		for (;;) {
			if (!__pyx_t_5 && ((((PyObject*)(__pyx_t_7))->ob_type) == &PyList_Type)) {
				if (__pyx_t_4 >= (((PyVarObject*)(__pyx_t_7))->ob_size)) break;
				__pyx_t_2 = (((PyListObject *)(__pyx_t_7))->ob_item[__pyx_t_4]); (   ((PyObject*)(__pyx_t_2))->ob_refcnt++); __pyx_t_4++;
			} else if (!__pyx_t_5 && ((((PyObject*)(__pyx_t_7))->ob_type) == &PyTuple_Type)) {
				if (__pyx_t_4 >= (((PyVarObject*)(__pyx_t_7))->ob_size)) break;
				__pyx_t_2 = (((PyTupleObject *)(__pyx_t_7))->ob_item[__pyx_t_4]); (   ((PyObject*)(__pyx_t_2))->ob_refcnt++); __pyx_t_4++;
			} else {
				__pyx_t_2 = __pyx_t_5(__pyx_t_7);
				if ((!__pyx_t_2)) {
					if (PyErr_Occurred()) {
						if ((PyErr_ExceptionMatches(PyExc_StopIteration))) PyErr_Clear();
						else {__pyx_filename = __pyx_f[0]; __pyx_lineno = 132; __pyx_clineno = 2451; goto __pyx_L1_error;}
					}
					break;
				}
				;
			}
			do { if ((__pyx_v_output) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_output))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_output)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_output)))); } while (0); } while (0);
			__pyx_v_output = __pyx_t_2;
			__pyx_t_2 = 0;
			/* "_browse.pyx":133
*         print '<div class=filelist>'
*         for output in sorted(node.outputs):
*             print '<tt><a href="?%s">%s</a></tt><br>' % (output, output)             # <<<<<<<<<<<<<<
*         print '</div>'
* 
*/
			__pyx_t_2 = PyTuple_New(2); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; __pyx_clineno = 2468; goto __pyx_L1_error;}
			;
			(   ((PyObject*)(__pyx_v_output))->ob_refcnt++);
			(((PyTupleObject *)(__pyx_t_2))->ob_item[0] = __pyx_v_output);
			;
			(   ((PyObject*)(__pyx_v_output))->ob_refcnt++);
			(((PyTupleObject *)(__pyx_t_2))->ob_item[1] = __pyx_v_output);
			;
			__pyx_t_1 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_18), ((PyObject *)__pyx_t_2)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; __pyx_clineno = 2476; goto __pyx_L1_error;}
			;
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_2)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_2))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_2))))); } while (0); __pyx_t_2 = 0;
			if (__Pyx_PrintOne(0, ((PyObject *)__pyx_t_1)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 133; __pyx_clineno = 2479; goto __pyx_L1_error;}
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
		}
		do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); __pyx_t_7 = 0;
		/* "_browse.pyx":134
*         for output in sorted(node.outputs):
*             print '<tt><a href="?%s">%s</a></tt><br>' % (output, output)
*         print '</div>'             # <<<<<<<<<<<<<<
* 
* def ninja_dump(target):
*/
		if (__Pyx_PrintOne(0, ((PyObject *)__pyx_kp_s_16)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 134; __pyx_clineno = 2491; goto __pyx_L1_error;}
		goto __pyx_L10;
	}
	__pyx_L10:;
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_6) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); } while (0);
	do { if ((__pyx_t_7) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); } while (0);
	do { if ((__pyx_t_8) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_8))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_8)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_8)))); } while (0); } while (0);
	__Pyx_AddTraceback("_browse.generate_html", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = ((void *)0);
	__pyx_L0:;
	do { if ((__pyx_v_input) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_input))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_input)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_input)))); } while (0); } while (0);
	do { if ((__pyx_v_type) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_type)))); } while (0); } while (0);
	do { if ((__pyx_v_extra) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_extra))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_extra)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_extra)))); } while (0); } while (0);
	do { if ((__pyx_v_output) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_output))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_output)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_output)))); } while (0); } while (0);
	;
	;
	return __pyx_r;
}
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_7ninja_dump(PyObject *__pyx_self, PyObject *__pyx_v_target); /*proto*/
static PyMethodDef __pyx_mdef_7_browse_7ninja_dump = {("ninja_dump"), (PyCFunction)__pyx_pw_7_browse_7ninja_dump, 0x0008, (0)};
static PyObject *__pyx_pw_7_browse_7ninja_dump(PyObject *__pyx_self, PyObject *__pyx_v_target) {
	PyObject *__pyx_r = 0;
	;
	__pyx_r = __pyx_pf_7_browse_6ninja_dump(__pyx_self, ((PyObject *)__pyx_v_target));
	;
	return __pyx_r;
}
/* "_browse.pyx":136
*         print '</div>'
* 
* def ninja_dump(target):             # <<<<<<<<<<<<<<
*     global cmdStr
*     proc = subprocess.Popen([cmdStr, '-t', 'query', target],
*/
static PyObject *__pyx_pf_7_browse_6ninja_dump( PyObject *__pyx_self, PyObject *__pyx_v_target) {
	PyObject *__pyx_v_proc = ((void *)0);
	PyObject *__pyx_r = ((void *)0);
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	PyObject *__pyx_t_3 = ((void *)0);
	PyObject *__pyx_t_4 = ((void *)0);
	PyObject *__pyx_t_5 = ((void *)0);
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	/* "_browse.pyx":138
* def ninja_dump(target):
*     global cmdStr
*     proc = subprocess.Popen([cmdStr, '-t', 'query', target],             # <<<<<<<<<<<<<<
*                             stdout=subprocess.PIPE)
*     return proc.communicate()[0]
*/
	__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__subprocess); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2557; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyObject_GetAttr(__pyx_t_1, __pyx_n_s__Popen); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2559; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	__pyx_t_1 = PyString_FromString(__pyx_v_7_browse_cmdStr); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2562; goto __pyx_L1_error;}
	;
	__pyx_t_3 = PyList_New(4); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2564; goto __pyx_L1_error;}
	;
	(((PyListObject *)(__pyx_t_3))->ob_item[0] = (((PyObject *)__pyx_t_1)));
	;
	(   ((PyObject*)(((PyObject *)__pyx_kp_s_19)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_3))->ob_item[1] = (((PyObject *)__pyx_kp_s_19)));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__query)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_3))->ob_item[2] = (((PyObject *)__pyx_n_s__query)));
	;
	(   ((PyObject*)(__pyx_v_target))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_3))->ob_item[3] = (__pyx_v_target));
	;
	__pyx_t_1 = 0;
	__pyx_t_1 = PyTuple_New(1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2578; goto __pyx_L1_error;}
	;
	(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = ((PyObject *)__pyx_t_3));
	;
	__pyx_t_3 = 0;
	__pyx_t_3 = PyDict_New(); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2583; goto __pyx_L1_error;}
	;
	/* "_browse.pyx":139
*     global cmdStr
*     proc = subprocess.Popen([cmdStr, '-t', 'query', target],
*                             stdout=subprocess.PIPE)             # <<<<<<<<<<<<<<
*     return proc.communicate()[0]
* 
*/
	__pyx_t_4 = __Pyx_GetName(__pyx_m, __pyx_n_s__subprocess); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; __pyx_clineno = 2593; goto __pyx_L1_error;}
	;
	__pyx_t_5 = PyObject_GetAttr(__pyx_t_4, __pyx_n_s__PIPE); if ((!__pyx_t_5)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 139; __pyx_clineno = 2595; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
	if (PyDict_SetItem(__pyx_t_3, ((PyObject *)__pyx_n_s__stdout), __pyx_t_5) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2598; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_5))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_5)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_5)))); } while (0); __pyx_t_5 = 0;
	__pyx_t_5 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_1), ((PyObject *)__pyx_t_3)); if ((!__pyx_t_5)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 138; __pyx_clineno = 2600; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_3)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_3))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_3))))); } while (0); __pyx_t_3 = 0;
	__pyx_v_proc = __pyx_t_5;
	__pyx_t_5 = 0;
	/* "_browse.pyx":140
*     proc = subprocess.Popen([cmdStr, '-t', 'query', target],
*                             stdout=subprocess.PIPE)
*     return proc.communicate()[0]             # <<<<<<<<<<<<<<
* 
* class RequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):
*/
	do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
	__pyx_t_5 = PyObject_GetAttr(__pyx_v_proc, __pyx_n_s__communicate); if ((!__pyx_t_5)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 140; __pyx_clineno = 2616; goto __pyx_L1_error;}
	;
	__pyx_t_3 = PyObject_Call(__pyx_t_5, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 140; __pyx_clineno = 2618; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_5))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_5)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_5)))); } while (0); __pyx_t_5 = 0;
	__pyx_t_5 = (((sizeof(long)) <= sizeof(Py_ssize_t)) ? __Pyx_GetItemInt_Fast(__pyx_t_3, 0) : __Pyx_GetItemInt_Generic(__pyx_t_3, PyInt_FromLong(0))); if (!__pyx_t_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 140; __pyx_clineno = 2621; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); __pyx_t_3 = 0;
	__pyx_r = __pyx_t_5;
	__pyx_t_5 = 0;
	goto __pyx_L0;
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_3) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); } while (0);
	do { if ((__pyx_t_4) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); } while (0);
	do { if ((__pyx_t_5) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_5))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_5)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_5)))); } while (0); } while (0);
	__Pyx_AddTraceback("_browse.ninja_dump", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = ((void *)0);
	__pyx_L0:;
	do { if ((__pyx_v_proc) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_proc))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_proc)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_proc)))); } while (0); } while (0);
	;
	;
	return __pyx_r;
}
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_14RequestHandler_1do_GET(PyObject *__pyx_self, PyObject *__pyx_v_self); /*proto*/
static PyMethodDef __pyx_mdef_7_browse_14RequestHandler_1do_GET = {("do_GET"), (PyCFunction)__pyx_pw_7_browse_14RequestHandler_1do_GET, 0x0008, (0)};
static PyObject *__pyx_pw_7_browse_14RequestHandler_1do_GET(PyObject *__pyx_self, PyObject *__pyx_v_self) {
	PyObject *__pyx_r = 0;
	;
	__pyx_r = __pyx_pf_7_browse_14RequestHandler_do_GET(__pyx_self, ((PyObject *)__pyx_v_self));
	;
	return __pyx_r;
}
/* "_browse.pyx":143
* 
* class RequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):
*     def do_GET(self):             # <<<<<<<<<<<<<<
*         global locationStr
*         assert self.path[0] == '/'
*/
static PyObject *__pyx_pf_7_browse_14RequestHandler_do_GET( PyObject *__pyx_self, PyObject *__pyx_v_self) {
	PyObject *__pyx_v_target = ((void *)0);
	PyObject *__pyx_v_input = ((void *)0);
	PyObject *__pyx_v_stdout = ((void *)0);
	PyObject *__pyx_r = ((void *)0);
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	int __pyx_t_3;
	PyObject *__pyx_t_4 = ((void *)0);
	int __pyx_t_5;
	PyObject *__pyx_t_6 = ((void *)0);
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	/* "_browse.pyx":145
*     def do_GET(self):
*         global locationStr
*         assert self.path[0] == '/'             # <<<<<<<<<<<<<<
*         target = self.path[1:]
* 
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__path); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 145; __pyx_clineno = 2690; goto __pyx_L1_error;}
	;
	__pyx_t_2 = (((sizeof(long)) <= sizeof(Py_ssize_t)) ? __Pyx_GetItemInt_Fast(__pyx_t_1, 0) : __Pyx_GetItemInt_Generic(__pyx_t_1, PyInt_FromLong(0))); if (!__pyx_t_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 145; __pyx_clineno = 2692; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	__pyx_t_3 = __Pyx_PyBytes_Equals(__pyx_t_2, ((PyObject *)__pyx_kp_s_20), 2); if ((__pyx_t_3 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 145; __pyx_clineno = 2695; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	if ((!__pyx_t_3)) {
		PyErr_SetNone(PyExc_AssertionError);
		{__pyx_filename = __pyx_f[0]; __pyx_lineno = 145; __pyx_clineno = 2699; goto __pyx_L1_error;}
	}
	/* "_browse.pyx":146
*         global locationStr
*         assert self.path[0] == '/'
*         target = self.path[1:]             # <<<<<<<<<<<<<<
* 
*         if target == '':
*/
	__pyx_t_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__path); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 146; __pyx_clineno = 2710; goto __pyx_L1_error;}
	;
	__pyx_t_1 = PySequence_GetSlice(__pyx_t_2, 1, ((Py_ssize_t)(((size_t)-1)>>1))); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 146; __pyx_clineno = 2712; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	__pyx_v_target = __pyx_t_1;
	__pyx_t_1 = 0;
	/* "_browse.pyx":148
*         target = self.path[1:]
* 
*         if target == '':             # <<<<<<<<<<<<<<
*             self.send_response(302)
*             self.send_header('Location', '?' + locationStr)
*/
	__pyx_t_3 = __Pyx_PyBytes_Equals(__pyx_v_target, ((PyObject *)__pyx_kp_s_13), 2); if ((__pyx_t_3 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 148; __pyx_clineno = 2725; goto __pyx_L1_error;}
	if (__pyx_t_3) {
		/* "_browse.pyx":149
* 
*         if target == '':
*             self.send_response(302)             # <<<<<<<<<<<<<<
*             self.send_header('Location', '?' + locationStr)
*             self.end_headers()
*/
		__pyx_t_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__send_response); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 149; __pyx_clineno = 2735; goto __pyx_L1_error;}
		;
		__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_k_tuple_21), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 149; __pyx_clineno = 2737; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		/* "_browse.pyx":150
*         if target == '':
*             self.send_response(302)
*             self.send_header('Location', '?' + locationStr)             # <<<<<<<<<<<<<<
*             self.end_headers()
*             return
*/
		__pyx_t_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__send_header); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; __pyx_clineno = 2749; goto __pyx_L1_error;}
		;
		__pyx_t_1 = PyString_FromString(__pyx_v_7_browse_locationStr); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; __pyx_clineno = 2751; goto __pyx_L1_error;}
		;
		__pyx_t_4 = PyNumber_Add(((PyObject *)__pyx_kp_s_22), ((PyObject *)__pyx_t_1)); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; __pyx_clineno = 2753; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
		__pyx_t_1 = PyTuple_New(2); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; __pyx_clineno = 2756; goto __pyx_L1_error;}
		;
		(   ((PyObject*)(((PyObject *)__pyx_n_s__Location)))->ob_refcnt++);
		(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = ((PyObject *)__pyx_n_s__Location));
		;
		(((PyTupleObject *)(__pyx_t_1))->ob_item[1] = __pyx_t_4);
		;
		__pyx_t_4 = 0;
		__pyx_t_4 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_1), ((void *)0)); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 150; __pyx_clineno = 2764; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
		do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
		/* "_browse.pyx":151
*             self.send_response(302)
*             self.send_header('Location', '?' + locationStr)
*             self.end_headers()             # <<<<<<<<<<<<<<
*             return
* 
*/
		__pyx_t_4 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__end_headers); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 151; __pyx_clineno = 2777; goto __pyx_L1_error;}
		;
		__pyx_t_1 = PyObject_Call(__pyx_t_4, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 151; __pyx_clineno = 2779; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		/* "_browse.pyx":152
*             self.send_header('Location', '?' + locationStr)
*             self.end_headers()
*             return             # <<<<<<<<<<<<<<
* 
*         if not target.startswith('?'):
*/
		do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
		__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
		goto __pyx_L0;
		goto __pyx_L3;
	}
	__pyx_L3:;
	/* "_browse.pyx":154
*             return
* 
*         if not target.startswith('?'):             # <<<<<<<<<<<<<<
*             self.send_response(404)
*             self.end_headers()
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_target, __pyx_n_s__startswith); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 154; __pyx_clineno = 2805; goto __pyx_L1_error;}
	;
	__pyx_t_4 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_k_tuple_23), ((void *)0)); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 154; __pyx_clineno = 2807; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	__pyx_t_3 = __Pyx_PyObject_IsTrue(__pyx_t_4); if ((__pyx_t_3 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 154; __pyx_clineno = 2810; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
	__pyx_t_5 = (!__pyx_t_3);
	if (__pyx_t_5) {
		/* "_browse.pyx":155
* 
*         if not target.startswith('?'):
*             self.send_response(404)             # <<<<<<<<<<<<<<
*             self.end_headers()
*             return
*/
		__pyx_t_4 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__send_response); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 155; __pyx_clineno = 2822; goto __pyx_L1_error;}
		;
		__pyx_t_1 = PyObject_Call(__pyx_t_4, ((PyObject *)__pyx_k_tuple_24), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 155; __pyx_clineno = 2824; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		/* "_browse.pyx":156
*         if not target.startswith('?'):
*             self.send_response(404)
*             self.end_headers()             # <<<<<<<<<<<<<<
*             return
*         target = target[1:]
*/
		__pyx_t_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__end_headers); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 156; __pyx_clineno = 2836; goto __pyx_L1_error;}
		;
		__pyx_t_4 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 156; __pyx_clineno = 2838; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
		/* "_browse.pyx":157
*             self.send_response(404)
*             self.end_headers()
*             return             # <<<<<<<<<<<<<<
*         target = target[1:]
* 
*/
		do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
		__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
		goto __pyx_L0;
		goto __pyx_L4;
	}
	__pyx_L4:;
	/* "_browse.pyx":158
*             self.end_headers()
*             return
*         target = target[1:]             # <<<<<<<<<<<<<<
* 
*         input = ninja_dump(target)
*/
	__pyx_t_4 = PySequence_GetSlice(__pyx_v_target, 1, ((Py_ssize_t)(((size_t)-1)>>1))); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 158; __pyx_clineno = 2864; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_v_target))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_target)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_target)))); } while (0);
	__pyx_v_target = __pyx_t_4;
	__pyx_t_4 = 0;
	/* "_browse.pyx":160
*         target = target[1:]
* 
*         input = ninja_dump(target)             # <<<<<<<<<<<<<<
* 
*         self.send_response(200)
*/
	__pyx_t_4 = __Pyx_GetName(__pyx_m, __pyx_n_s__ninja_dump); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 160; __pyx_clineno = 2877; goto __pyx_L1_error;}
	;
	__pyx_t_1 = PyTuple_New(1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 160; __pyx_clineno = 2879; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(__pyx_v_target))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_1))->ob_item[0] = __pyx_v_target);
	;
	__pyx_t_2 = PyObject_Call(__pyx_t_4, ((PyObject *)__pyx_t_1), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 160; __pyx_clineno = 2884; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
	__pyx_v_input = __pyx_t_2;
	__pyx_t_2 = 0;
	/* "_browse.pyx":162
*         input = ninja_dump(target)
* 
*         self.send_response(200)             # <<<<<<<<<<<<<<
*         self.end_headers()
*         stdout = sys.stdout
*/
	__pyx_t_2 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__send_response); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 162; __pyx_clineno = 2898; goto __pyx_L1_error;}
	;
	__pyx_t_1 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_k_tuple_25), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 162; __pyx_clineno = 2900; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":163
* 
*         self.send_response(200)
*         self.end_headers()             # <<<<<<<<<<<<<<
*         stdout = sys.stdout
*         sys.stdout = self.wfile
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__end_headers); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 163; __pyx_clineno = 2912; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 163; __pyx_clineno = 2914; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	/* "_browse.pyx":164
*         self.send_response(200)
*         self.end_headers()
*         stdout = sys.stdout             # <<<<<<<<<<<<<<
*         sys.stdout = self.wfile
*         try:
*/
	__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__sys); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; __pyx_clineno = 2926; goto __pyx_L1_error;}
	;
	__pyx_t_1 = PyObject_GetAttr(__pyx_t_2, __pyx_n_s__stdout); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 164; __pyx_clineno = 2928; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	__pyx_v_stdout = __pyx_t_1;
	__pyx_t_1 = 0;
	/* "_browse.pyx":165
*         self.end_headers()
*         stdout = sys.stdout
*         sys.stdout = self.wfile             # <<<<<<<<<<<<<<
*         try:
*             generate_html(parse(input.strip()))
*/
	__pyx_t_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_s__wfile); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; __pyx_clineno = 2941; goto __pyx_L1_error;}
	;
	__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__sys); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; __pyx_clineno = 2943; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_t_2, __pyx_n_s__stdout, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 165; __pyx_clineno = 2945; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	/* "_browse.pyx":166
*         stdout = sys.stdout
*         sys.stdout = self.wfile
*         try:             # <<<<<<<<<<<<<<
*             generate_html(parse(input.strip()))
*         finally:
*/
	/*try:*/ {
		/* "_browse.pyx":167
*         sys.stdout = self.wfile
*         try:
*             generate_html(parse(input.strip()))             # <<<<<<<<<<<<<<
*         finally:
*             sys.stdout = stdout
*/
		__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__generate_html); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2965; goto __pyx_L6;}
		;
		__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__parse); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2967; goto __pyx_L6;}
		;
		__pyx_t_4 = PyObject_GetAttr(__pyx_v_input, __pyx_n_s__strip); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2969; goto __pyx_L6;}
		;
		__pyx_t_6 = PyObject_Call(__pyx_t_4, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2971; goto __pyx_L6;}
		;
		do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
		__pyx_t_4 = PyTuple_New(1); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2974; goto __pyx_L6;}
		;
		(((PyTupleObject *)(__pyx_t_4))->ob_item[0] = __pyx_t_6);
		;
		__pyx_t_6 = 0;
		__pyx_t_6 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_t_4), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2979; goto __pyx_L6;}
		;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		do { if (  --((PyObject*)(((PyObject *)__pyx_t_4)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_4))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_4))))); } while (0); __pyx_t_4 = 0;
		__pyx_t_4 = PyTuple_New(1); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2983; goto __pyx_L6;}
		;
		(((PyTupleObject *)(__pyx_t_4))->ob_item[0] = __pyx_t_6);
		;
		__pyx_t_6 = 0;
		__pyx_t_6 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_4), ((void *)0)); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 167; __pyx_clineno = 2988; goto __pyx_L6;}
		;
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		do { if (  --((PyObject*)(((PyObject *)__pyx_t_4)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_4))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_4))))); } while (0); __pyx_t_4 = 0;
		do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
	}
	/* "_browse.pyx":169
*             generate_html(parse(input.strip()))
*         finally:
*             sys.stdout = stdout             # <<<<<<<<<<<<<<
* 
*     def log_message(self, format, *args):
*/
	/*finally:*/ {
		int __pyx_why;
		PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
		int __pyx_exc_lineno;
		__pyx_exc_type = 0; __pyx_exc_value = 0; __pyx_exc_tb = 0; __pyx_exc_lineno = 0;
		__pyx_why = 0; goto __pyx_L7;
		__pyx_L6: {
			__pyx_why = 4;
			do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0); __pyx_t_1 = 0;
			do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0); __pyx_t_2 = 0;
			do { if ((__pyx_t_4) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); } while (0); __pyx_t_4 = 0;
			do { if ((__pyx_t_6) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); } while (0); __pyx_t_6 = 0;
			__Pyx_ErrFetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
			__pyx_exc_lineno = __pyx_lineno;
			goto __pyx_L7;
		}
		__pyx_L7:;
		__pyx_t_6 = __Pyx_GetName(__pyx_m, __pyx_n_s__sys); if ((!__pyx_t_6)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 169; __pyx_clineno = 3019; goto __pyx_L8_error;}
		;
		if (PyObject_SetAttr(__pyx_t_6, __pyx_n_s__stdout, __pyx_v_stdout) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 169; __pyx_clineno = 3021; goto __pyx_L8_error;}
		do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); __pyx_t_6 = 0;
		goto __pyx_L9;
		__pyx_L8_error:;
		if (__pyx_why == 4) {
			do { if ((__pyx_exc_type) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_exc_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_exc_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_exc_type)))); } while (0); } while (0);
			do { if ((__pyx_exc_value) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_exc_value))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_exc_value)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_exc_value)))); } while (0); } while (0);
			do { if ((__pyx_exc_tb) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_exc_tb))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_exc_tb)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_exc_tb)))); } while (0); } while (0);
		}
		goto __pyx_L1_error;
		__pyx_L9:;
		switch (__pyx_why) {
		case 4: {
				__Pyx_ErrRestore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
				__pyx_lineno = __pyx_exc_lineno;
				__pyx_exc_type = 0;
				__pyx_exc_value = 0;
				__pyx_exc_tb = 0;
				goto __pyx_L1_error;
			}
		}
	}
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_4) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); } while (0);
	do { if ((__pyx_t_6) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); } while (0);
	__Pyx_AddTraceback("_browse.RequestHandler.do_GET", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = ((void *)0);
	__pyx_L0:;
	do { if ((__pyx_v_target) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_target))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_target)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_target)))); } while (0); } while (0);
	do { if ((__pyx_v_input) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_input))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_input)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_input)))); } while (0); } while (0);
	do { if ((__pyx_v_stdout) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_stdout))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_stdout)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_stdout)))); } while (0); } while (0);
	;
	;
	return __pyx_r;
}
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_14RequestHandler_3log_message(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_7_browse_14RequestHandler_3log_message = {("log_message"), (PyCFunction)__pyx_pw_7_browse_14RequestHandler_3log_message, 0x0001|0x0002, (0)};
static PyObject *__pyx_pw_7_browse_14RequestHandler_3log_message(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
	PyObject *__pyx_v_self = 0;
	PyObject *__pyx_v_format = 0;
	PyObject *__pyx_v_args = 0;
	PyObject *__pyx_r = 0;
	;
	if ((((PyVarObject*)(__pyx_args))->ob_size) > 2) {
		__pyx_v_args = PyTuple_GetSlice(__pyx_args, 2, (((PyVarObject*)(__pyx_args))->ob_size));
		if ((!__pyx_v_args)) {
			;
			return ((void *)0);
		}
		;
	} else {
		__pyx_v_args = __pyx_empty_tuple; (   ((PyObject*)(__pyx_empty_tuple))->ob_refcnt++);
	}
	{
		static PyObject **__pyx_pyargnames[] = {&__pyx_n_s__self,&__pyx_n_s__format,0};
		PyObject* values[2] = {0,0};
		if ((__pyx_kwds)) {
			Py_ssize_t kw_args;
			const Py_ssize_t pos_args = (((PyVarObject*)(__pyx_args))->ob_size);
			switch (pos_args) {
			default:
			case  2: values[1] = (((PyTupleObject *)(__pyx_args))->ob_item[1]);
			case  1: values[0] = (((PyTupleObject *)(__pyx_args))->ob_item[0]);
			case  0: break;
			}
			kw_args = PyDict_Size(__pyx_kwds);
			switch (pos_args) {
			case  0:
				if (((values[0] = PyDict_GetItem(__pyx_kwds, __pyx_n_s__self)) != 0)) kw_args--;
				else goto __pyx_L5_argtuple_error;
			case  1:
				if (((values[1] = PyDict_GetItem(__pyx_kwds, __pyx_n_s__format)) != 0)) kw_args--;
				else {
					__Pyx_RaiseArgtupleInvalid("log_message", 0, 2, 2, 1); {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 3102; goto __pyx_L3_error;}
				}
			}
			if ((kw_args > 0)) {
				const Py_ssize_t used_pos_args = (pos_args < 2) ? pos_args : 2;
				if ((__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, used_pos_args, "log_message") < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 3107; goto __pyx_L3_error;}
			}
		} else if ((((PyVarObject*)(__pyx_args))->ob_size) < 2) {
			goto __pyx_L5_argtuple_error;
		} else {
			values[0] = (((PyTupleObject *)(__pyx_args))->ob_item[0]);
			values[1] = (((PyTupleObject *)(__pyx_args))->ob_item[1]);
		}
		__pyx_v_self = values[0];
		__pyx_v_format = values[1];
	}
	goto __pyx_L4_argument_unpacking_done;
	__pyx_L5_argtuple_error:;
	__Pyx_RaiseArgtupleInvalid("log_message", 0, 2, 2, (((PyVarObject*)(__pyx_args))->ob_size)); {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 3120; goto __pyx_L3_error;}
	__pyx_L3_error:;
	do { if (  --((PyObject*)(__pyx_v_args))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_args)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_args)))); } while (0); __pyx_v_args = 0;
	__Pyx_AddTraceback("_browse.RequestHandler.log_message", __pyx_clineno, __pyx_lineno, __pyx_filename);
	;
	return ((void *)0);
	__pyx_L4_argument_unpacking_done:;
	__pyx_r = __pyx_pf_7_browse_14RequestHandler_2log_message(__pyx_self, __pyx_v_self, __pyx_v_format, __pyx_v_args);
	do { if ((__pyx_v_args) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_args))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_args)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_args)))); } while (0); } while (0);
	;
	return __pyx_r;
}
/* "_browse.pyx":171
*             sys.stdout = stdout
* 
*     def log_message(self, format, *args):             # <<<<<<<<<<<<<<
*         pass  # Swallow console spam.
* 
*/
static PyObject *__pyx_pf_7_browse_14RequestHandler_2log_message( PyObject *__pyx_self,  PyObject *__pyx_v_self,  PyObject *__pyx_v_format,  PyObject *__pyx_v_args) {
	PyObject *__pyx_r = ((void *)0);
	;
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	;
	;
	return __pyx_r;
}
/* "_browse.pyx":174
*         pass  # Swallow console spam.
* 
* cpdef public int browseBuild(char* cmd, char* location):             # <<<<<<<<<<<<<<
*     cdef int port = 8000
*     global locationStr, cmdStr
*/
static PyObject *__pyx_pw_7_browse_9browseBuild(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
int browseBuild(char *__pyx_v_cmd, char *__pyx_v_location,  int __pyx_skip_dispatch) {
	int __pyx_v_port;
	PyObject *__pyx_v_httpd = ((void *)0);
	int __pyx_r;
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	PyObject *__pyx_t_3 = ((void *)0);
	PyObject *__pyx_t_4 = ((void *)0);
	PyObject *__pyx_t_5 = ((void *)0);
	PyObject *__pyx_t_6 = ((void *)0);
	PyObject *__pyx_t_7 = ((void *)0);
	int __pyx_t_8;
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	/* "_browse.pyx":175
* 
* cpdef public int browseBuild(char* cmd, char* location):
*     cdef int port = 8000             # <<<<<<<<<<<<<<
*     global locationStr, cmdStr
*     locationStr = location
*/
	__pyx_v_port = 8000;
	/* "_browse.pyx":177
*     cdef int port = 8000
*     global locationStr, cmdStr
*     locationStr = location             # <<<<<<<<<<<<<<
*     cmdStr = cmd
*     httpd = BaseHTTPServer.HTTPServer(('',port), RequestHandler)
*/
	__pyx_v_7_browse_locationStr = __pyx_v_location;
	/* "_browse.pyx":178
*     global locationStr, cmdStr
*     locationStr = location
*     cmdStr = cmd             # <<<<<<<<<<<<<<
*     httpd = BaseHTTPServer.HTTPServer(('',port), RequestHandler)
*     try:
*/
	__pyx_v_7_browse_cmdStr = __pyx_v_cmd;
	/* "_browse.pyx":179
*     locationStr = location
*     cmdStr = cmd
*     httpd = BaseHTTPServer.HTTPServer(('',port), RequestHandler)             # <<<<<<<<<<<<<<
*     try:
*         print 'Web server running on port %d, ctl-C to abort...' % port
*/
	__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__BaseHTTPServer); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3213; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyObject_GetAttr(__pyx_t_1, __pyx_n_s__HTTPServer); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3215; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	__pyx_t_1 = PyInt_FromLong(__pyx_v_port); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3218; goto __pyx_L1_error;}
	;
	__pyx_t_3 = PyTuple_New(2); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3220; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_kp_s_13)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_3))->ob_item[0] = ((PyObject *)__pyx_kp_s_13));
	;
	(((PyTupleObject *)(__pyx_t_3))->ob_item[1] = __pyx_t_1);
	;
	__pyx_t_1 = 0;
	__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__RequestHandler); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3228; goto __pyx_L1_error;}
	;
	__pyx_t_4 = PyTuple_New(2); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3230; goto __pyx_L1_error;}
	;
	(((PyTupleObject *)(__pyx_t_4))->ob_item[0] = ((PyObject *)__pyx_t_3));
	;
	(((PyTupleObject *)(__pyx_t_4))->ob_item[1] = __pyx_t_1);
	;
	__pyx_t_3 = 0;
	__pyx_t_1 = 0;
	__pyx_t_1 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_4), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 179; __pyx_clineno = 3238; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_4)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_4))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_4))))); } while (0); __pyx_t_4 = 0;
	__pyx_v_httpd = __pyx_t_1;
	__pyx_t_1 = 0;
	/* "_browse.pyx":180
*     cmdStr = cmd
*     httpd = BaseHTTPServer.HTTPServer(('',port), RequestHandler)
*     try:             # <<<<<<<<<<<<<<
*         print 'Web server running on port %d, ctl-C to abort...' % port
*         webbrowser.open_new('http://localhost:%s' % port)
*/
	{
		__Pyx_ExceptionSave(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
		;
		;
		;
		/*try:*/ {
			/* "_browse.pyx":181
*     httpd = BaseHTTPServer.HTTPServer(('',port), RequestHandler)
*     try:
*         print 'Web server running on port %d, ctl-C to abort...' % port             # <<<<<<<<<<<<<<
*         webbrowser.open_new('http://localhost:%s' % port)
*         httpd.serve_forever()
*/
			__pyx_t_1 = PyInt_FromLong(__pyx_v_port); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 181; __pyx_clineno = 3266; goto __pyx_L3_error;}
			;
			__pyx_t_4 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_26), __pyx_t_1); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 181; __pyx_clineno = 3268; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			if (__Pyx_PrintOne(0, ((PyObject *)__pyx_t_4)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 181; __pyx_clineno = 3271; goto __pyx_L3_error;}
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_4)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_4))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_4))))); } while (0); __pyx_t_4 = 0;
			/* "_browse.pyx":182
*     try:
*         print 'Web server running on port %d, ctl-C to abort...' % port
*         webbrowser.open_new('http://localhost:%s' % port)             # <<<<<<<<<<<<<<
*         httpd.serve_forever()
*     except KeyboardInterrupt:
*/
			__pyx_t_4 = __Pyx_GetName(__pyx_m, __pyx_n_s__webbrowser); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; __pyx_clineno = 3281; goto __pyx_L3_error;}
			;
			__pyx_t_1 = PyObject_GetAttr(__pyx_t_4, __pyx_n_s__open_new); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; __pyx_clineno = 3283; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
			__pyx_t_4 = PyInt_FromLong(__pyx_v_port); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; __pyx_clineno = 3286; goto __pyx_L3_error;}
			;
			__pyx_t_2 = PyNumber_Remainder(((PyObject *)__pyx_kp_s_27), __pyx_t_4); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; __pyx_clineno = 3288; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
			__pyx_t_4 = PyTuple_New(1); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; __pyx_clineno = 3291; goto __pyx_L3_error;}
			;
			(((PyTupleObject *)(__pyx_t_4))->ob_item[0] = ((PyObject *)__pyx_t_2));
			;
			__pyx_t_2 = 0;
			__pyx_t_2 = PyObject_Call(__pyx_t_1, ((PyObject *)__pyx_t_4), ((void *)0)); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 182; __pyx_clineno = 3296; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			do { if (  --((PyObject*)(((PyObject *)__pyx_t_4)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_4))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_4))))); } while (0); __pyx_t_4 = 0;
			do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			/* "_browse.pyx":183
*         print 'Web server running on port %d, ctl-C to abort...' % port
*         webbrowser.open_new('http://localhost:%s' % port)
*         httpd.serve_forever()             # <<<<<<<<<<<<<<
*     except KeyboardInterrupt:
*         print
*/
			__pyx_t_2 = PyObject_GetAttr(__pyx_v_httpd, __pyx_n_s__serve_forever); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 183; __pyx_clineno = 3309; goto __pyx_L3_error;}
			;
			__pyx_t_4 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_empty_tuple), ((void *)0)); if ((!__pyx_t_4)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 183; __pyx_clineno = 3311; goto __pyx_L3_error;}
			;
			do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
		}
		do { if ((__pyx_t_5) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_5))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_5)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_5)))); } while (0); } while (0); __pyx_t_5 = 0;
		do { if ((__pyx_t_6) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_6))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_6)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_6)))); } while (0); } while (0); __pyx_t_6 = 0;
		do { if ((__pyx_t_7) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_7))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_7)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_7)))); } while (0); } while (0); __pyx_t_7 = 0;
		goto __pyx_L10_try_end;
		__pyx_L3_error:;
		do { if ((__pyx_t_3) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); } while (0); __pyx_t_3 = 0;
		do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0); __pyx_t_1 = 0;
		do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0); __pyx_t_2 = 0;
		do { if ((__pyx_t_4) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); } while (0); __pyx_t_4 = 0;
		/* "_browse.pyx":184
*         webbrowser.open_new('http://localhost:%s' % port)
*         httpd.serve_forever()
*     except KeyboardInterrupt:             # <<<<<<<<<<<<<<
*         print
*         pass
*/
		__pyx_t_8 = PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
		if (__pyx_t_8) {
			__Pyx_AddTraceback("_browse.browseBuild", __pyx_clineno, __pyx_lineno, __pyx_filename);
			if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_2, &__pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 184; __pyx_clineno = 3336; goto __pyx_L5_except_error;}
			;
			;
			;
			/* "_browse.pyx":185
*         httpd.serve_forever()
*     except KeyboardInterrupt:
*         print             # <<<<<<<<<<<<<<
*         pass
*     return 0
*/
			if (__Pyx_Print(0, ((PyObject *)__pyx_empty_tuple), 1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 185; __pyx_clineno = 3348; goto __pyx_L5_except_error;}
			do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); __pyx_t_4 = 0;
			do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
			do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
			goto __pyx_L4_exception_handled;
		}
		__pyx_L5_except_error:;
		;
		;
		;
		__Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
		goto __pyx_L1_error;
		__pyx_L4_exception_handled:;
		;
		;
		;
		__Pyx_ExceptionReset(__pyx_t_5, __pyx_t_6, __pyx_t_7);
		__pyx_L10_try_end:;
	}
	/* "_browse.pyx":187
*         print
*         pass
*     return 0             # <<<<<<<<<<<<<<
* 
* if __name__=='__main__':
*/
	__pyx_r = 0;
	goto __pyx_L0;
	__pyx_r = 0;
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_3) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); } while (0);
	do { if ((__pyx_t_4) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_4))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_4)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_4)))); } while (0); } while (0);
	__Pyx_WriteUnraisable("_browse.browseBuild", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = 0;
	__pyx_L0:;
	do { if ((__pyx_v_httpd) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_v_httpd))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_v_httpd)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_v_httpd)))); } while (0); } while (0);
	;
	return __pyx_r;
}
/* Python wrapper */
static PyObject *__pyx_pw_7_browse_9browseBuild(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_pw_7_browse_9browseBuild(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
	char *__pyx_v_cmd;
	char *__pyx_v_location;
	PyObject *__pyx_r = 0;
	;
	{
		static PyObject **__pyx_pyargnames[] = {&__pyx_n_s__cmd,&__pyx_n_s__location,0};
		PyObject* values[2] = {0,0};
		if ((__pyx_kwds)) {
			Py_ssize_t kw_args;
			const Py_ssize_t pos_args = (((PyVarObject*)(__pyx_args))->ob_size);
			switch (pos_args) {
			case  2: values[1] = (((PyTupleObject *)(__pyx_args))->ob_item[1]);
			case  1: values[0] = (((PyTupleObject *)(__pyx_args))->ob_item[0]);
			case  0: break;
			default: goto __pyx_L5_argtuple_error;
			}
			kw_args = PyDict_Size(__pyx_kwds);
			switch (pos_args) {
			case  0:
				if (((values[0] = PyDict_GetItem(__pyx_kwds, __pyx_n_s__cmd)) != 0)) kw_args--;
				else goto __pyx_L5_argtuple_error;
			case  1:
				if (((values[1] = PyDict_GetItem(__pyx_kwds, __pyx_n_s__location)) != 0)) kw_args--;
				else {
					__Pyx_RaiseArgtupleInvalid("browseBuild", 1, 2, 2, 1); {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; __pyx_clineno = 3421; goto __pyx_L3_error;}
				}
			}
			if ((kw_args > 0)) {
				if ((__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "browseBuild") < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; __pyx_clineno = 3425; goto __pyx_L3_error;}
			}
		} else if ((((PyVarObject*)(__pyx_args))->ob_size) != 2) {
			goto __pyx_L5_argtuple_error;
		} else {
			values[0] = (((PyTupleObject *)(__pyx_args))->ob_item[0]);
			values[1] = (((PyTupleObject *)(__pyx_args))->ob_item[1]);
		}
		__pyx_v_cmd = PyString_AsString(values[0]); if (((!__pyx_v_cmd) && PyErr_Occurred())) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; __pyx_clineno = 3433; goto __pyx_L3_error;}
		__pyx_v_location = PyString_AsString(values[1]); if (((!__pyx_v_location) && PyErr_Occurred())) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; __pyx_clineno = 3434; goto __pyx_L3_error;}
	}
	goto __pyx_L4_argument_unpacking_done;
	__pyx_L5_argtuple_error:;
	__Pyx_RaiseArgtupleInvalid("browseBuild", 1, 2, 2, (((PyVarObject*)(__pyx_args))->ob_size)); {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; __pyx_clineno = 3438; goto __pyx_L3_error;}
	__pyx_L3_error:;
	__Pyx_AddTraceback("_browse.browseBuild", __pyx_clineno, __pyx_lineno, __pyx_filename);
	;
	return ((void *)0);
	__pyx_L4_argument_unpacking_done:;
	__pyx_r = __pyx_pf_7_browse_8browseBuild(__pyx_self, __pyx_v_cmd, __pyx_v_location);
	;
	return __pyx_r;
}
/* "_browse.pyx":174
*         pass  # Swallow console spam.
* 
* cpdef public int browseBuild(char* cmd, char* location):             # <<<<<<<<<<<<<<
*     cdef int port = 8000
*     global locationStr, cmdStr
*/
static PyObject *__pyx_pf_7_browse_8browseBuild( PyObject *__pyx_self, char *__pyx_v_cmd, char *__pyx_v_location) {
	PyObject *__pyx_r = ((void *)0);
	PyObject *__pyx_t_1 = ((void *)0);
	int __pyx_lineno = 0;
	const char *__pyx_filename = ((void *)0);
	int __pyx_clineno = 0;
	;
	do { if ((__pyx_r) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_r))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_r)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_r)))); } while (0); } while (0);
	__pyx_t_1 = PyInt_FromLong(browseBuild(__pyx_v_cmd, __pyx_v_location, 0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 174; __pyx_clineno = 3466; goto __pyx_L1_error;}
	;
	__pyx_r = __pyx_t_1;
	__pyx_t_1 = 0;
	goto __pyx_L0;
	__pyx_r = (&_Py_NoneStruct); (   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	__Pyx_AddTraceback("_browse.browseBuild", __pyx_clineno, __pyx_lineno, __pyx_filename);
	__pyx_r = ((void *)0);
	__pyx_L0:;
	;
	;
	return __pyx_r;
}
static PyMethodDef __pyx_methods[] = {
	{("browseBuild"), (PyCFunction)__pyx_pw_7_browse_9browseBuild, 0x0001|0x0002, (0)},
	{0, 0, 0, 0}
};
static __Pyx_StringTabEntry __pyx_string_tab[] = {
	{&__pyx_kp_s_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 0, 1, 0},
	{&__pyx_kp_s_10, __pyx_k_10, sizeof(__pyx_k_10), 0, 0, 1, 0},
	{&__pyx_kp_s_11, __pyx_k_11, sizeof(__pyx_k_11), 0, 0, 1, 0},
	{&__pyx_kp_s_12, __pyx_k_12, sizeof(__pyx_k_12), 0, 0, 1, 0},
	{&__pyx_kp_s_13, __pyx_k_13, sizeof(__pyx_k_13), 0, 0, 1, 0},
	{&__pyx_kp_s_14, __pyx_k_14, sizeof(__pyx_k_14), 0, 0, 1, 0},
	{&__pyx_kp_s_15, __pyx_k_15, sizeof(__pyx_k_15), 0, 0, 1, 0},
	{&__pyx_kp_s_16, __pyx_k_16, sizeof(__pyx_k_16), 0, 0, 1, 0},
	{&__pyx_kp_s_17, __pyx_k_17, sizeof(__pyx_k_17), 0, 0, 1, 0},
	{&__pyx_kp_s_18, __pyx_k_18, sizeof(__pyx_k_18), 0, 0, 1, 0},
	{&__pyx_kp_s_19, __pyx_k_19, sizeof(__pyx_k_19), 0, 0, 1, 0},
	{&__pyx_kp_s_20, __pyx_k_20, sizeof(__pyx_k_20), 0, 0, 1, 0},
	{&__pyx_kp_s_22, __pyx_k_22, sizeof(__pyx_k_22), 0, 0, 1, 0},
	{&__pyx_kp_s_26, __pyx_k_26, sizeof(__pyx_k_26), 0, 0, 1, 0},
	{&__pyx_kp_s_27, __pyx_k_27, sizeof(__pyx_k_27), 0, 0, 1, 0},
	{&__pyx_kp_s_3, __pyx_k_3, sizeof(__pyx_k_3), 0, 0, 1, 0},
	{&__pyx_kp_s_31, __pyx_k_31, sizeof(__pyx_k_31), 0, 0, 1, 0},
	{&__pyx_kp_s_4, __pyx_k_4, sizeof(__pyx_k_4), 0, 0, 1, 0},
	{&__pyx_n_s_42, __pyx_k_42, sizeof(__pyx_k_42), 0, 0, 1, 1},
	{&__pyx_kp_s_5, __pyx_k_5, sizeof(__pyx_k_5), 0, 0, 1, 0},
	{&__pyx_kp_s_6, __pyx_k_6, sizeof(__pyx_k_6), 0, 0, 1, 0},
	{&__pyx_kp_s_7, __pyx_k_7, sizeof(__pyx_k_7), 0, 0, 1, 0},
	{&__pyx_kp_s_8, __pyx_k_8, sizeof(__pyx_k_8), 0, 0, 1, 0},
	{&__pyx_kp_s_9, __pyx_k_9, sizeof(__pyx_k_9), 0, 0, 1, 0},
	{&__pyx_n_s__BaseHTTPServer, __pyx_k__BaseHTTPServer, sizeof(__pyx_k__BaseHTTPServer), 0, 0, 1, 1},
	{&__pyx_n_s__HTTPServer, __pyx_k__HTTPServer, sizeof(__pyx_k__HTTPServer), 0, 0, 1, 1},
	{&__pyx_n_s__KeyboardInterrupt, __pyx_k__KeyboardInterrupt, sizeof(__pyx_k__KeyboardInterrupt), 0, 0, 1, 1},
	{&__pyx_n_s__Location, __pyx_k__Location, sizeof(__pyx_k__Location), 0, 0, 1, 1},
	{&__pyx_n_s__Node, __pyx_k__Node, sizeof(__pyx_k__Node), 0, 0, 1, 1},
	{&__pyx_n_s__PIPE, __pyx_k__PIPE, sizeof(__pyx_k__PIPE), 0, 0, 1, 1},
	{&__pyx_n_s__Popen, __pyx_k__Popen, sizeof(__pyx_k__Popen), 0, 0, 1, 1},
	{&__pyx_n_s__RequestHandler, __pyx_k__RequestHandler, sizeof(__pyx_k__RequestHandler), 0, 0, 1, 1},
	{&__pyx_n_s__StopIteration, __pyx_k__StopIteration, sizeof(__pyx_k__StopIteration), 0, 0, 1, 1},
	{&__pyx_n_s___, __pyx_k___, sizeof(__pyx_k___), 0, 0, 1, 1},
	{&__pyx_n_s____main__, __pyx_k____main__, sizeof(__pyx_k____main__), 0, 0, 1, 1},
	{&__pyx_n_s____name__, __pyx_k____name__, sizeof(__pyx_k____name__), 0, 0, 1, 1},
	{&__pyx_n_s____test__, __pyx_k____test__, sizeof(__pyx_k____test__), 0, 0, 1, 1},
	{&__pyx_n_s___browse, __pyx_k___browse, sizeof(__pyx_k___browse), 0, 0, 1, 1},
	{&__pyx_n_s__args, __pyx_k__args, sizeof(__pyx_k__args), 0, 0, 1, 1},
	{&__pyx_n_s__argv, __pyx_k__argv, sizeof(__pyx_k__argv), 0, 0, 1, 1},
	{&__pyx_n_s__cmd, __pyx_k__cmd, sizeof(__pyx_k__cmd), 0, 0, 1, 1},
	{&__pyx_n_s__collections, __pyx_k__collections, sizeof(__pyx_k__collections), 0, 0, 1, 1},
	{&__pyx_n_s__communicate, __pyx_k__communicate, sizeof(__pyx_k__communicate), 0, 0, 1, 1},
	{&__pyx_n_s__do_GET, __pyx_k__do_GET, sizeof(__pyx_k__do_GET), 0, 0, 1, 1},
	{&__pyx_n_s__end_headers, __pyx_k__end_headers, sizeof(__pyx_k__end_headers), 0, 0, 1, 1},
	{&__pyx_n_s__extra, __pyx_k__extra, sizeof(__pyx_k__extra), 0, 0, 1, 1},
	{&__pyx_n_s__format, __pyx_k__format, sizeof(__pyx_k__format), 0, 0, 1, 1},
	{&__pyx_n_s__generate_html, __pyx_k__generate_html, sizeof(__pyx_k__generate_html), 0, 0, 1, 1},
	{&__pyx_n_s__implicit, __pyx_k__implicit, sizeof(__pyx_k__implicit), 0, 0, 1, 1},
	{&__pyx_n_s__input, __pyx_k__input, sizeof(__pyx_k__input), 0, 0, 1, 1},
	{&__pyx_n_s__inputs, __pyx_k__inputs, sizeof(__pyx_k__inputs), 0, 0, 1, 1},
	{&__pyx_n_s__line, __pyx_k__line, sizeof(__pyx_k__line), 0, 0, 1, 1},
	{&__pyx_n_s__lines, __pyx_k__lines, sizeof(__pyx_k__lines), 0, 0, 1, 1},
	{&__pyx_n_s__location, __pyx_k__location, sizeof(__pyx_k__location), 0, 0, 1, 1},
	{&__pyx_n_s__log_message, __pyx_k__log_message, sizeof(__pyx_k__log_message), 0, 0, 1, 1},
	{&__pyx_n_s__match, __pyx_k__match, sizeof(__pyx_k__match), 0, 0, 1, 1},
	{&__pyx_n_s__match_strip, __pyx_k__match_strip, sizeof(__pyx_k__match_strip), 0, 0, 1, 1},
	{&__pyx_n_s__namedtuple, __pyx_k__namedtuple, sizeof(__pyx_k__namedtuple), 0, 0, 1, 1},
	{&__pyx_n_s__next, __pyx_k__next, sizeof(__pyx_k__next), 0, 0, 1, 1},
	{&__pyx_n_s__ninja_dump, __pyx_k__ninja_dump, sizeof(__pyx_k__ninja_dump), 0, 0, 1, 1},
	{&__pyx_n_s__node, __pyx_k__node, sizeof(__pyx_k__node), 0, 0, 1, 1},
	{&__pyx_n_s__open_new, __pyx_k__open_new, sizeof(__pyx_k__open_new), 0, 0, 1, 1},
	{&__pyx_n_s__output, __pyx_k__output, sizeof(__pyx_k__output), 0, 0, 1, 1},
	{&__pyx_n_s__outputs, __pyx_k__outputs, sizeof(__pyx_k__outputs), 0, 0, 1, 1},
	{&__pyx_n_s__parse, __pyx_k__parse, sizeof(__pyx_k__parse), 0, 0, 1, 1},
	{&__pyx_n_s__path, __pyx_k__path, sizeof(__pyx_k__path), 0, 0, 1, 1},
	{&__pyx_n_s__prefix, __pyx_k__prefix, sizeof(__pyx_k__prefix), 0, 0, 1, 1},
	{&__pyx_n_s__proc, __pyx_k__proc, sizeof(__pyx_k__proc), 0, 0, 1, 1},
	{&__pyx_n_s__query, __pyx_k__query, sizeof(__pyx_k__query), 0, 0, 1, 1},
	{&__pyx_n_s__rule, __pyx_k__rule, sizeof(__pyx_k__rule), 0, 0, 1, 1},
	{&__pyx_n_s__self, __pyx_k__self, sizeof(__pyx_k__self), 0, 0, 1, 1},
	{&__pyx_n_s__send_header, __pyx_k__send_header, sizeof(__pyx_k__send_header), 0, 0, 1, 1},
	{&__pyx_n_s__send_response, __pyx_k__send_response, sizeof(__pyx_k__send_response), 0, 0, 1, 1},
	{&__pyx_n_s__serve_forever, __pyx_k__serve_forever, sizeof(__pyx_k__serve_forever), 0, 0, 1, 1},
	{&__pyx_n_s__sorted, __pyx_k__sorted, sizeof(__pyx_k__sorted), 0, 0, 1, 1},
	{&__pyx_n_s__split, __pyx_k__split, sizeof(__pyx_k__split), 0, 0, 1, 1},
	{&__pyx_n_s__startswith, __pyx_k__startswith, sizeof(__pyx_k__startswith), 0, 0, 1, 1},
	{&__pyx_n_s__stdout, __pyx_k__stdout, sizeof(__pyx_k__stdout), 0, 0, 1, 1},
	{&__pyx_n_s__strip, __pyx_k__strip, sizeof(__pyx_k__strip), 0, 0, 1, 1},
	{&__pyx_n_s__subprocess, __pyx_k__subprocess, sizeof(__pyx_k__subprocess), 0, 0, 1, 1},
	{&__pyx_n_s__sys, __pyx_k__sys, sizeof(__pyx_k__sys), 0, 0, 1, 1},
	{&__pyx_n_s__target, __pyx_k__target, sizeof(__pyx_k__target), 0, 0, 1, 1},
	{&__pyx_n_s__text, __pyx_k__text, sizeof(__pyx_k__text), 0, 0, 1, 1},
	{&__pyx_n_s__type, __pyx_k__type, sizeof(__pyx_k__type), 0, 0, 1, 1},
	{&__pyx_n_s__webbrowser, __pyx_k__webbrowser, sizeof(__pyx_k__webbrowser), 0, 0, 1, 1},
	{&__pyx_n_s__wfile, __pyx_k__wfile, sizeof(__pyx_k__wfile), 0, 0, 1, 1},
	{0, 0, 0, 0, 0, 0, 0}
};
static int __Pyx_InitCachedBuiltins(void) {
	__pyx_builtin_StopIteration = __Pyx_GetName(__pyx_b, __pyx_n_s__StopIteration); if (!__pyx_builtin_StopIteration) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 84; __pyx_clineno = 3593; goto __pyx_L1_error;}
	__pyx_builtin_sorted = __Pyx_GetName(__pyx_b, __pyx_n_s__sorted); if (!__pyx_builtin_sorted) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 122; __pyx_clineno = 3594; goto __pyx_L1_error;}
	__pyx_builtin_KeyboardInterrupt = __Pyx_GetName(__pyx_b, __pyx_n_s__KeyboardInterrupt); if (!__pyx_builtin_KeyboardInterrupt) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 184; __pyx_clineno = 3595; goto __pyx_L1_error;}
	return 0;
	__pyx_L1_error:;
	return -1;
}
static int __Pyx_InitCachedConstants(void) {
	;
	/* "_browse.pyx":53
* 
* def parse(text):
*     lines = iter(text.split('\n'))             # <<<<<<<<<<<<<<
* 
*     target = None
*/
	__pyx_k_tuple_2 = PyTuple_New(1); if ((!__pyx_k_tuple_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; __pyx_clineno = 3612; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_kp_s_1)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_2))->ob_item[0] = ((PyObject *)__pyx_kp_s_1));
	;
	;
	/* "_browse.pyx":149
* 
*         if target == '':
*             self.send_response(302)             # <<<<<<<<<<<<<<
*             self.send_header('Location', '?' + locationStr)
*             self.end_headers()
*/
	__pyx_k_tuple_21 = PyTuple_New(1); if ((!__pyx_k_tuple_21)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 149; __pyx_clineno = 3626; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(__pyx_int_302))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_21))->ob_item[0] = __pyx_int_302);
	;
	;
	/* "_browse.pyx":154
*             return
* 
*         if not target.startswith('?'):             # <<<<<<<<<<<<<<
*             self.send_response(404)
*             self.end_headers()
*/
	__pyx_k_tuple_23 = PyTuple_New(1); if ((!__pyx_k_tuple_23)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 154; __pyx_clineno = 3640; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_kp_s_22)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_23))->ob_item[0] = ((PyObject *)__pyx_kp_s_22));
	;
	;
	/* "_browse.pyx":155
* 
*         if not target.startswith('?'):
*             self.send_response(404)             # <<<<<<<<<<<<<<
*             self.end_headers()
*             return
*/
	__pyx_k_tuple_24 = PyTuple_New(1); if ((!__pyx_k_tuple_24)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 155; __pyx_clineno = 3654; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(__pyx_int_404))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_24))->ob_item[0] = __pyx_int_404);
	;
	;
	/* "_browse.pyx":162
*         input = ninja_dump(target)
* 
*         self.send_response(200)             # <<<<<<<<<<<<<<
*         self.end_headers()
*         stdout = sys.stdout
*/
	__pyx_k_tuple_25 = PyTuple_New(1); if ((!__pyx_k_tuple_25)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 162; __pyx_clineno = 3668; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(__pyx_int_200))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_25))->ob_item[0] = __pyx_int_200);
	;
	;
	/* "_browse.pyx":47
* # of an edge.  But I think it's less confusing than alternatives.
* 
* def match_strip(line, prefix):             # <<<<<<<<<<<<<<
*     if not line.startswith(prefix):
*         return (False, line)
*/
	__pyx_k_tuple_29 = PyTuple_New(2); if ((!__pyx_k_tuple_29)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 3682; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__line)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_29))->ob_item[0] = ((PyObject *)__pyx_n_s__line));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__prefix)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_29))->ob_item[1] = ((PyObject *)__pyx_n_s__prefix));
	;
	;
	__pyx_k_codeobj_30 = (PyObject*)PyCode_New(2, 2, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_k_tuple_29, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_31, __pyx_n_s__match_strip, 47, __pyx_empty_bytes); if ((!__pyx_k_codeobj_30)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 3691; goto __pyx_L1_error;}
	/* "_browse.pyx":52
*     return (True, line[len(prefix):])
* 
* def parse(text):             # <<<<<<<<<<<<<<
*     lines = iter(text.split('\n'))
* 
*/
	__pyx_k_tuple_32 = PyTuple_New(10); if ((!__pyx_k_tuple_32)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; __pyx_clineno = 3700; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__text)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[0] = ((PyObject *)__pyx_n_s__text));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__lines)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[1] = ((PyObject *)__pyx_n_s__lines));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__target)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[2] = ((PyObject *)__pyx_n_s__target));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__rule)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[3] = ((PyObject *)__pyx_n_s__rule));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__inputs)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[4] = ((PyObject *)__pyx_n_s__inputs));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__outputs)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[5] = ((PyObject *)__pyx_n_s__outputs));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__line)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[6] = ((PyObject *)__pyx_n_s__line));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__match)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[7] = ((PyObject *)__pyx_n_s__match));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__type)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[8] = ((PyObject *)__pyx_n_s__type));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s___)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_32))->ob_item[9] = ((PyObject *)__pyx_n_s___));
	;
	;
	__pyx_k_codeobj_33 = (PyObject*)PyCode_New(1, 10, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_k_tuple_32, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_31, __pyx_n_s__parse, 52, __pyx_empty_bytes); if ((!__pyx_k_codeobj_33)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; __pyx_clineno = 3733; goto __pyx_L1_error;}
	/* "_browse.pyx":89
*     return Node(inputs, rule, target, outputs)
* 
* def generate_html(node):             # <<<<<<<<<<<<<<
*     print '''<!DOCTYPE html>
* <style>
*/
	__pyx_k_tuple_34 = PyTuple_New(5); if ((!__pyx_k_tuple_34)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; __pyx_clineno = 3742; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__node)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_34))->ob_item[0] = ((PyObject *)__pyx_n_s__node));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__input)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_34))->ob_item[1] = ((PyObject *)__pyx_n_s__input));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__type)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_34))->ob_item[2] = ((PyObject *)__pyx_n_s__type));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__extra)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_34))->ob_item[3] = ((PyObject *)__pyx_n_s__extra));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__output)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_34))->ob_item[4] = ((PyObject *)__pyx_n_s__output));
	;
	;
	__pyx_k_codeobj_35 = (PyObject*)PyCode_New(1, 5, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_k_tuple_34, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_31, __pyx_n_s__generate_html, 89, __pyx_empty_bytes); if ((!__pyx_k_codeobj_35)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; __pyx_clineno = 3760; goto __pyx_L1_error;}
	/* "_browse.pyx":136
*         print '</div>'
* 
* def ninja_dump(target):             # <<<<<<<<<<<<<<
*     global cmdStr
*     proc = subprocess.Popen([cmdStr, '-t', 'query', target],
*/
	__pyx_k_tuple_36 = PyTuple_New(2); if ((!__pyx_k_tuple_36)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; __pyx_clineno = 3769; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__target)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_36))->ob_item[0] = ((PyObject *)__pyx_n_s__target));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__proc)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_36))->ob_item[1] = ((PyObject *)__pyx_n_s__proc));
	;
	;
	__pyx_k_codeobj_37 = (PyObject*)PyCode_New(1, 2, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_k_tuple_36, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_31, __pyx_n_s__ninja_dump, 136, __pyx_empty_bytes); if ((!__pyx_k_codeobj_37)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; __pyx_clineno = 3778; goto __pyx_L1_error;}
	/* "_browse.pyx":143
* 
* class RequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):
*     def do_GET(self):             # <<<<<<<<<<<<<<
*         global locationStr
*         assert self.path[0] == '/'
*/
	__pyx_k_tuple_38 = PyTuple_New(4); if ((!__pyx_k_tuple_38)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; __pyx_clineno = 3787; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__self)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_38))->ob_item[0] = ((PyObject *)__pyx_n_s__self));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__target)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_38))->ob_item[1] = ((PyObject *)__pyx_n_s__target));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__input)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_38))->ob_item[2] = ((PyObject *)__pyx_n_s__input));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__stdout)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_38))->ob_item[3] = ((PyObject *)__pyx_n_s__stdout));
	;
	;
	__pyx_k_codeobj_39 = (PyObject*)PyCode_New(1, 4, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_k_tuple_38, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_31, __pyx_n_s__do_GET, 143, __pyx_empty_bytes); if ((!__pyx_k_codeobj_39)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; __pyx_clineno = 3802; goto __pyx_L1_error;}
	/* "_browse.pyx":171
*             sys.stdout = stdout
* 
*     def log_message(self, format, *args):             # <<<<<<<<<<<<<<
*         pass  # Swallow console spam.
* 
*/
	__pyx_k_tuple_40 = PyTuple_New(4); if ((!__pyx_k_tuple_40)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 3811; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__self)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_40))->ob_item[0] = ((PyObject *)__pyx_n_s__self));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__format)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_40))->ob_item[1] = ((PyObject *)__pyx_n_s__format));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__args)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_40))->ob_item[2] = ((PyObject *)__pyx_n_s__args));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__args)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_k_tuple_40))->ob_item[3] = ((PyObject *)__pyx_n_s__args));
	;
	;
	__pyx_k_codeobj_41 = (PyObject*)PyCode_New(2, 4, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_k_tuple_40, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_31, __pyx_n_s__log_message, 171, __pyx_empty_bytes); if ((!__pyx_k_codeobj_41)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 3826; goto __pyx_L1_error;}
	;
	return 0;
	__pyx_L1_error:;
	;
	return -1;
}
static int __Pyx_InitGlobals(void) {
	if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3835; goto __pyx_L1_error;};
	__pyx_int_200 = PyInt_FromLong(200); if ((!__pyx_int_200)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3836; goto __pyx_L1_error;};
	__pyx_int_302 = PyInt_FromLong(302); if ((!__pyx_int_302)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3837; goto __pyx_L1_error;};
	__pyx_int_404 = PyInt_FromLong(404); if ((!__pyx_int_404)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3838; goto __pyx_L1_error;};
	return 0;
	__pyx_L1_error:;
	return -1;
}
__declspec(dllexport) void init_browse(void); /*proto*/
__declspec(dllexport) void init_browse(void)
{
	PyObject *__pyx_t_1 = ((void *)0);
	PyObject *__pyx_t_2 = ((void *)0);
	PyObject *__pyx_t_3 = ((void *)0);
	int __pyx_t_4;
	char *__pyx_t_5;
	char *__pyx_t_6;
	;
	if ( __Pyx_check_binary_version() < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3869; goto __pyx_L1_error;}
	__pyx_empty_tuple = PyTuple_New(0); if ((!__pyx_empty_tuple)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3870; goto __pyx_L1_error;}
	__pyx_empty_bytes = PyString_FromStringAndSize("", 0); if ((!__pyx_empty_bytes)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3871; goto __pyx_L1_error;}
	if (__Pyx_CyFunction_init() < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3873; goto __pyx_L1_error;}
	/*--- Library function declarations ---*/
	/*--- Threads initialization code ---*/
	/*--- Module creation code ---*/
	__pyx_m = Py_InitModule4(("_browse"), __pyx_methods, (__pyx_k_28), 0, 1013);
	if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3894; goto __pyx_L1_error;};
	(   ((PyObject*)(__pyx_m))->ob_refcnt++);
	__pyx_b = PyImport_AddModule(("__builtin__"));
	if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3899; goto __pyx_L1_error;};
	if (PyObject_SetAttrString((__pyx_m),("__builtins__"),(__pyx_b)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3903; goto __pyx_L1_error;};
	/*--- Initialize various global constants etc. ---*/
	if ((__Pyx_InitGlobals() < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3905; goto __pyx_L1_error;}
	if (__pyx_module_is_main__browse) {
		if (PyObject_SetAttrString((__pyx_m),("__name__"),(__pyx_n_s____main__)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3907; goto __pyx_L1_error;};
	}
	/*--- Builtin init code ---*/
	if ((__Pyx_InitCachedBuiltins() < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3910; goto __pyx_L1_error;}
	/*--- Constants init code ---*/
	if ((__Pyx_InitCachedConstants() < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 3912; goto __pyx_L1_error;}
	/*--- Global init code ---*/
	/*--- Variable export code ---*/
	/*--- Function export code ---*/
	/*--- Type init code ---*/
	/*--- Type import code ---*/
	/*--- Variable import code ---*/
	/*--- Function import code ---*/
	/*--- Execution code ---*/
	/* "_browse.pyx":24
* """
* 
* import BaseHTTPServer             # <<<<<<<<<<<<<<
* import subprocess
* import sys
*/
	__pyx_t_1 = __Pyx_Import(((PyObject *)__pyx_n_s__BaseHTTPServer), 0, -1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 24; __pyx_clineno = 3929; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__BaseHTTPServer, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 24; __pyx_clineno = 3931; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":25
* 
* import BaseHTTPServer
* import subprocess             # <<<<<<<<<<<<<<
* import sys
* import webbrowser
*/
	__pyx_t_1 = __Pyx_Import(((PyObject *)__pyx_n_s__subprocess), 0, -1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 25; __pyx_clineno = 3941; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__subprocess, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 25; __pyx_clineno = 3943; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":26
* import BaseHTTPServer
* import subprocess
* import sys             # <<<<<<<<<<<<<<
* import webbrowser
* from collections import namedtuple
*/
	__pyx_t_1 = __Pyx_Import(((PyObject *)__pyx_n_s__sys), 0, -1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 26; __pyx_clineno = 3953; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__sys, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 26; __pyx_clineno = 3955; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":27
* import subprocess
* import sys
* import webbrowser             # <<<<<<<<<<<<<<
* from collections import namedtuple
* 
*/
	__pyx_t_1 = __Pyx_Import(((PyObject *)__pyx_n_s__webbrowser), 0, -1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 27; __pyx_clineno = 3965; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__webbrowser, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 27; __pyx_clineno = 3967; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":28
* import sys
* import webbrowser
* from collections import namedtuple             # <<<<<<<<<<<<<<
* 
* cpdef char* locationStr = ''
*/
	__pyx_t_1 = PyList_New(1); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; __pyx_clineno = 3977; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__namedtuple)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_1))->ob_item[0] = (((PyObject *)__pyx_n_s__namedtuple)));
	;
	__pyx_t_2 = __Pyx_Import(((PyObject *)__pyx_n_s__collections), ((PyObject *)__pyx_t_1), -1); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; __pyx_clineno = 3982; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
	__pyx_t_1 = PyObject_GetAttr(__pyx_t_2, __pyx_n_s__namedtuple);
	if (__pyx_t_1 == ((void *)0)) {
		if (PyErr_ExceptionMatches(PyExc_AttributeError)) __Pyx_RaiseImportError(__pyx_n_s__namedtuple);
		if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; __pyx_clineno = 3988; goto __pyx_L1_error;}
	}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__namedtuple, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 28; __pyx_clineno = 3991; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	/* "_browse.pyx":30
* from collections import namedtuple
* 
* cpdef char* locationStr = ''             # <<<<<<<<<<<<<<
* cpdef char* cmdStr = ''
* Node = namedtuple('Node', ['inputs', 'rule', 'target', 'outputs'])
*/
	__pyx_v_7_browse_locationStr = __pyx_k_13;
	/* "_browse.pyx":31
* 
* cpdef char* locationStr = ''
* cpdef char* cmdStr = ''             # <<<<<<<<<<<<<<
* Node = namedtuple('Node', ['inputs', 'rule', 'target', 'outputs'])
* 
*/
	__pyx_v_7_browse_cmdStr = __pyx_k_13;
	/* "_browse.pyx":32
* cpdef char* locationStr = ''
* cpdef char* cmdStr = ''
* Node = namedtuple('Node', ['inputs', 'rule', 'target', 'outputs'])             # <<<<<<<<<<<<<<
* 
* # Ideally we'd allow you to navigate to a build edge or a build node,
*/
	__pyx_t_2 = __Pyx_GetName(__pyx_m, __pyx_n_s__namedtuple); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; __pyx_clineno = 4020; goto __pyx_L1_error;}
	;
	__pyx_t_1 = PyList_New(4); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; __pyx_clineno = 4022; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__inputs)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_1))->ob_item[0] = (((PyObject *)__pyx_n_s__inputs)));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__rule)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_1))->ob_item[1] = (((PyObject *)__pyx_n_s__rule)));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__target)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_1))->ob_item[2] = (((PyObject *)__pyx_n_s__target)));
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__outputs)))->ob_refcnt++);
	(((PyListObject *)(__pyx_t_1))->ob_item[3] = (((PyObject *)__pyx_n_s__outputs)));
	;
	__pyx_t_3 = PyTuple_New(2); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; __pyx_clineno = 4036; goto __pyx_L1_error;}
	;
	(   ((PyObject*)(((PyObject *)__pyx_n_s__Node)))->ob_refcnt++);
	(((PyTupleObject *)(__pyx_t_3))->ob_item[0] = ((PyObject *)__pyx_n_s__Node));
	;
	(((PyTupleObject *)(__pyx_t_3))->ob_item[1] = ((PyObject *)__pyx_t_1));
	;
	__pyx_t_1 = 0;
	__pyx_t_1 = PyObject_Call(__pyx_t_2, ((PyObject *)__pyx_t_3), ((void *)0)); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; __pyx_clineno = 4044; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_3)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_3))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_3))))); } while (0); __pyx_t_3 = 0;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__Node, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 32; __pyx_clineno = 4048; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":47
* # of an edge.  But I think it's less confusing than alternatives.
* 
* def match_strip(line, prefix):             # <<<<<<<<<<<<<<
*     if not line.startswith(prefix):
*         return (False, line)
*/
	__pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_7_browse_1match_strip, ((void *)0), __pyx_n_s___browse); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 4058; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__match_strip, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 47; __pyx_clineno = 4060; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":52
*     return (True, line[len(prefix):])
* 
* def parse(text):             # <<<<<<<<<<<<<<
*     lines = iter(text.split('\n'))
* 
*/
	__pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_7_browse_3parse, ((void *)0), __pyx_n_s___browse); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; __pyx_clineno = 4070; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__parse, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; __pyx_clineno = 4072; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":89
*     return Node(inputs, rule, target, outputs)
* 
* def generate_html(node):             # <<<<<<<<<<<<<<
*     print '''<!DOCTYPE html>
* <style>
*/
	__pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_7_browse_5generate_html, ((void *)0), __pyx_n_s___browse); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; __pyx_clineno = 4082; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__generate_html, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 89; __pyx_clineno = 4084; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":136
*         print '</div>'
* 
* def ninja_dump(target):             # <<<<<<<<<<<<<<
*     global cmdStr
*     proc = subprocess.Popen([cmdStr, '-t', 'query', target],
*/
	__pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_7_browse_7ninja_dump, ((void *)0), __pyx_n_s___browse); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; __pyx_clineno = 4094; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__ninja_dump, __pyx_t_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 136; __pyx_clineno = 4096; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":142
*     return proc.communicate()[0]
* 
* class RequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):             # <<<<<<<<<<<<<<
*     def do_GET(self):
*         global locationStr
*/
	__pyx_t_1 = PyDict_New(); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; __pyx_clineno = 4106; goto __pyx_L1_error;}
	;
	/* "_browse.pyx":143
* 
* class RequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):
*     def do_GET(self):             # <<<<<<<<<<<<<<
*         global locationStr
*         assert self.path[0] == '/'
*/
	__pyx_t_3 = __Pyx_CyFunction_New(__pyx_CyFunctionType, &__pyx_mdef_7_browse_14RequestHandler_1do_GET, 0, ((void *)0), __pyx_n_s___browse, ((PyObject *)__pyx_k_codeobj_39)); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; __pyx_clineno = 4116; goto __pyx_L1_error;}
	;
	if (PyObject_SetItem(__pyx_t_1, __pyx_n_s__do_GET, __pyx_t_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 143; __pyx_clineno = 4118; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); __pyx_t_3 = 0;
	/* "_browse.pyx":171
*             sys.stdout = stdout
* 
*     def log_message(self, format, *args):             # <<<<<<<<<<<<<<
*         pass  # Swallow console spam.
* 
*/
	__pyx_t_3 = __Pyx_CyFunction_New(__pyx_CyFunctionType, &__pyx_mdef_7_browse_14RequestHandler_3log_message, 0, ((void *)0), __pyx_n_s___browse, ((PyObject *)__pyx_k_codeobj_41)); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 4128; goto __pyx_L1_error;}
	;
	if (PyObject_SetItem(__pyx_t_1, __pyx_n_s__log_message, __pyx_t_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 171; __pyx_clineno = 4130; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); __pyx_t_3 = 0;
	/* "_browse.pyx":142
*     return proc.communicate()[0]
* 
* class RequestHandler(BaseHTTPServer.BaseHTTPRequestHandler):             # <<<<<<<<<<<<<<
*     def do_GET(self):
*         global locationStr
*/
	__pyx_t_3 = __Pyx_GetName(__pyx_m, __pyx_n_s__BaseHTTPServer); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; __pyx_clineno = 4140; goto __pyx_L1_error;}
	;
	__pyx_t_2 = PyObject_GetAttr(__pyx_t_3, __pyx_n_s_42); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; __pyx_clineno = 4142; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); __pyx_t_3 = 0;
	__pyx_t_3 = PyTuple_New(1); if ((!__pyx_t_3)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; __pyx_clineno = 4145; goto __pyx_L1_error;}
	;
	(((PyTupleObject *)(__pyx_t_3))->ob_item[0] = __pyx_t_2);
	;
	__pyx_t_2 = 0;
	__pyx_t_2 = __Pyx_CreateClass(((PyObject *)__pyx_t_3), ((PyObject *)__pyx_t_1), __pyx_n_s__RequestHandler, __pyx_n_s___browse); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; __pyx_clineno = 4150; goto __pyx_L1_error;}
	;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_3)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_3))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_3))))); } while (0); __pyx_t_3 = 0;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s__RequestHandler, __pyx_t_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 142; __pyx_clineno = 4153; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
	/* "_browse.pyx":189
*     return 0
* 
* if __name__=='__main__':             # <<<<<<<<<<<<<<
*     browseBuild(sys.argv[1], sys.argv[2])
*/
	__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s____name__); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 189; __pyx_clineno = 4163; goto __pyx_L1_error;}
	;
	__pyx_t_4 = __Pyx_PyBytes_Equals(__pyx_t_1, ((PyObject *)__pyx_n_s____main__), 2); if ((__pyx_t_4 < 0)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 189; __pyx_clineno = 4165; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
	if (__pyx_t_4) {
		/* "_browse.pyx":190
* 
* if __name__=='__main__':
*     browseBuild(sys.argv[1], sys.argv[2])             # <<<<<<<<<<<<<<
*/
		__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__sys); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4174; goto __pyx_L1_error;}
		;
		__pyx_t_2 = PyObject_GetAttr(__pyx_t_1, __pyx_n_s__argv); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4176; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		__pyx_t_1 = (((sizeof(long)) <= sizeof(Py_ssize_t)) ? __Pyx_GetItemInt_Fast(__pyx_t_2, 1) : __Pyx_GetItemInt_Generic(__pyx_t_2, PyInt_FromLong(1))); if (!__pyx_t_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4179; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		__pyx_t_5 = PyString_AsString(__pyx_t_1); if (((!__pyx_t_5) && PyErr_Occurred())) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4182; goto __pyx_L1_error;}
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		__pyx_t_1 = __Pyx_GetName(__pyx_m, __pyx_n_s__sys); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4184; goto __pyx_L1_error;}
		;
		__pyx_t_2 = PyObject_GetAttr(__pyx_t_1, __pyx_n_s__argv); if ((!__pyx_t_2)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4186; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		__pyx_t_1 = (((sizeof(long)) <= sizeof(Py_ssize_t)) ? __Pyx_GetItemInt_Fast(__pyx_t_2, 2) : __Pyx_GetItemInt_Generic(__pyx_t_2, PyInt_FromLong(2))); if (!__pyx_t_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4189; goto __pyx_L1_error;}
		;
		do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); __pyx_t_2 = 0;
		__pyx_t_6 = PyString_AsString(__pyx_t_1); if (((!__pyx_t_6) && PyErr_Occurred())) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 190; __pyx_clineno = 4192; goto __pyx_L1_error;}
		do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); __pyx_t_1 = 0;
		browseBuild(__pyx_t_5, __pyx_t_6, 0);
		goto __pyx_L2;
	}
	__pyx_L2:;
	/* "_browse.pyx":1
* #!/usr/bin/env cython             # <<<<<<<<<<<<<<
* #
* # Copyright 2001 Google Inc. All Rights Reserved.
*/
	__pyx_t_1 = PyDict_New(); if ((!__pyx_t_1)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 4204; goto __pyx_L1_error;}
	;
	if (PyObject_SetAttr(__pyx_m, __pyx_n_s____test__, ((PyObject *)__pyx_t_1)) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; __pyx_clineno = 4206; goto __pyx_L1_error;}
	do { if (  --((PyObject*)(((PyObject *)__pyx_t_1)))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(((PyObject *)__pyx_t_1))))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(((PyObject *)__pyx_t_1))))); } while (0); __pyx_t_1 = 0;
	goto __pyx_L0;
	__pyx_L1_error:;
	do { if ((__pyx_t_1) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_1))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_1)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_1)))); } while (0); } while (0);
	do { if ((__pyx_t_2) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_2))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_2)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_2)))); } while (0); } while (0);
	do { if ((__pyx_t_3) == ((void *)0)) ; else do { if (  --((PyObject*)(__pyx_t_3))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_t_3)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_t_3)))); } while (0); } while (0);
	if (__pyx_m) {
		__Pyx_AddTraceback("init _browse", __pyx_clineno, __pyx_lineno, __pyx_filename);
		do { if (  --((PyObject*)(__pyx_m))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(__pyx_m)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(__pyx_m)))); } while (0); __pyx_m = 0;
	} else if (!PyErr_Occurred()) {
		PyErr_SetString(PyExc_ImportError, "init _browse");
	}
	__pyx_L0:;
	;
	return;
}
/* Runtime support code */
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
	PyObject *result;
	result = PyObject_GetAttr(dict, name);
	if (!result) {
		if (dict != __pyx_b) {
			PyErr_Clear();
			result = PyObject_GetAttr(__pyx_b, name);
		}
		if (!result) {
			PyErr_SetObject(PyExc_NameError, name);
		}
	}
	return result;
}
static void __Pyx_RaiseArgtupleInvalid(
const char* func_name,
int exact,
Py_ssize_t num_min,
Py_ssize_t num_max,
Py_ssize_t num_found)
{
	Py_ssize_t num_expected;
	const char *more_or_less;
	if (num_found < num_min) {
		num_expected = num_min;
		more_or_less = "at least";
	} else {
		num_expected = num_max;
		more_or_less = "at most";
	}
	if (exact) {
		more_or_less = "exactly";
	}
	PyErr_Format(PyExc_TypeError,
	"%s() takes %s %" "" "d positional argument%s (%" "" "d given)",
	func_name, more_or_less, num_expected,
	(num_expected == 1) ? "" : "s", num_found);
}
static void __Pyx_RaiseDoubleKeywordsError(
const char* func_name,
PyObject* kw_name)
{
	PyErr_Format(PyExc_TypeError,
	"%s() got multiple values for keyword argument '%s'", func_name,
	(((PyStringObject *)(kw_name))->ob_sval));
}
static int __Pyx_ParseOptionalKeywords(
PyObject *kwds,
PyObject **argnames[],
PyObject *kwds2,
PyObject *values[],
Py_ssize_t num_pos_args,
const char* function_name)
{
	PyObject *key = 0, *value = 0;
	Py_ssize_t pos = 0;
	PyObject*** name;
	PyObject*** first_kw_arg = argnames + num_pos_args;
	while (PyDict_Next(kwds, &pos, &key, &value)) {
		name = first_kw_arg;
		while (*name && (**name != key)) name++;
		if (*name) {
			values[name-argnames] = value;
		} else {
			if ((!((((PyObject*)(key))->ob_type) == &PyString_Type)) && (!((((((PyObject*)(key))->ob_type))->tp_flags & ((1L<<27))) != 0))) {
				goto invalid_keyword_type;
			} else {
				for (name = first_kw_arg; *name; name++) {
					if ((((PyVarObject*)(**name))->ob_size) == (((PyVarObject*)(key))->ob_size) &&
							_PyString_Eq(**name, key)) break;
				}
				if (*name) {
					values[name-argnames] = value;
				} else {
					for (name=argnames; name != first_kw_arg; name++) {
						if (**name == key) goto arg_passed_twice;
						if ((((PyVarObject*)(**name))->ob_size) == (((PyVarObject*)(key))->ob_size) &&
								_PyString_Eq(**name, key)) goto arg_passed_twice;
					}
					if (kwds2) {
						if ((PyDict_SetItem(kwds2, key, value))) goto bad;
					} else {
						goto invalid_keyword;
					}
				}
			}
		}
	}
	return 0;
	arg_passed_twice:
	__Pyx_RaiseDoubleKeywordsError(function_name, **name);
	goto bad;
	invalid_keyword_type:
	PyErr_Format(PyExc_TypeError,
	"%s() keywords must be strings", function_name);
	goto bad;
	invalid_keyword:
	PyErr_Format(PyExc_TypeError,
	"%s() got an unexpected keyword argument '%s'",
	function_name, PyString_AsString(key));
bad:
	return -1;
}
static __inline void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected) {
	PyErr_Format(PyExc_ValueError,
	"too many values to unpack (expected %" "" "d)", expected);
}
static __inline void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index) {
	PyErr_Format(PyExc_ValueError,
	"need more than %" "" "d value%s to unpack",
	index, (index == 1) ? "" : "s");
}
static __inline int __Pyx_IterFinish(void) {
	PyThreadState *tstate = (_PyThreadState_Current);
	PyObject* exc_type = tstate->curexc_type;
	if ((exc_type)) {
		if ((exc_type == PyExc_StopIteration) || PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration)) {
			PyObject *exc_value, *exc_tb;
			exc_value = tstate->curexc_value;
			exc_tb = tstate->curexc_traceback;
			tstate->curexc_type = 0;
			tstate->curexc_value = 0;
			tstate->curexc_traceback = 0;
			do { if (  --((PyObject*)(exc_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(exc_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(exc_type)))); } while (0);
			do { if ((exc_value) == ((void *)0)) ; else do { if (  --((PyObject*)(exc_value))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(exc_value)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(exc_value)))); } while (0); } while (0);
			do { if ((exc_tb) == ((void *)0)) ; else do { if (  --((PyObject*)(exc_tb))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(exc_tb)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(exc_tb)))); } while (0); } while (0);
			return 0;
		} else {
			return -1;
		}
	}
	return 0;
}
static int __Pyx_IternextUnpackEndCheck(PyObject *retval, Py_ssize_t expected) {
	if ((retval)) {
		do { if (  --((PyObject*)(retval))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(retval)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(retval)))); } while (0);
		__Pyx_RaiseTooManyValuesError(expected);
		return -1;
	} else {
		return __Pyx_IterFinish();
	}
	return 0;
}
static __inline void __Pyx_ErrRestore(PyObject *type, PyObject *value, PyObject *tb) {
	PyObject *tmp_type, *tmp_value, *tmp_tb;
	PyThreadState *tstate = (_PyThreadState_Current);
	tmp_type = tstate->curexc_type;
	tmp_value = tstate->curexc_value;
	tmp_tb = tstate->curexc_traceback;
	tstate->curexc_type = type;
	tstate->curexc_value = value;
	tstate->curexc_traceback = tb;
	do { if ((tmp_type) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_type)))); } while (0); } while (0);
	do { if ((tmp_value) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_value))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_value)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_value)))); } while (0); } while (0);
	do { if ((tmp_tb) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_tb))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_tb)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_tb)))); } while (0); } while (0);
}
static __inline void __Pyx_ErrFetch(PyObject **type, PyObject **value, PyObject **tb) {
	PyThreadState *tstate = (_PyThreadState_Current);
	*type = tstate->curexc_type;
	*value = tstate->curexc_value;
	*tb = tstate->curexc_traceback;
	tstate->curexc_type = 0;
	tstate->curexc_value = 0;
	tstate->curexc_traceback = 0;
}
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb) {
	PyObject *local_type, *local_value, *local_tb;
	PyObject *tmp_type, *tmp_value, *tmp_tb;
	PyThreadState *tstate = (_PyThreadState_Current);
	local_type = tstate->curexc_type;
	local_value = tstate->curexc_value;
	local_tb = tstate->curexc_traceback;
	tstate->curexc_type = 0;
	tstate->curexc_value = 0;
	tstate->curexc_traceback = 0;
	PyErr_NormalizeException(&local_type, &local_value, &local_tb);
	if ((tstate->curexc_type))
	goto bad;
	(   ((PyObject*)(local_type))->ob_refcnt++);
	(   ((PyObject*)(local_value))->ob_refcnt++);
	(   ((PyObject*)(local_tb))->ob_refcnt++);
	*type = local_type;
	*value = local_value;
	*tb = local_tb;
	tmp_type = tstate->exc_type;
	tmp_value = tstate->exc_value;
	tmp_tb = tstate->exc_traceback;
	tstate->exc_type = local_type;
	tstate->exc_value = local_value;
	tstate->exc_traceback = local_tb;
	/* Make sure tstate is in a consistent state when we XDECREF
	these objects (DECREF may run arbitrary code). */
	do { if ((tmp_type) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_type)))); } while (0); } while (0);
	do { if ((tmp_value) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_value))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_value)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_value)))); } while (0); } while (0);
	do { if ((tmp_tb) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_tb))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_tb)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_tb)))); } while (0); } while (0);
	return 0;
bad:
	*type = 0;
	*value = 0;
	*tb = 0;
	do { if ((local_type) == ((void *)0)) ; else do { if (  --((PyObject*)(local_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(local_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(local_type)))); } while (0); } while (0);
	do { if ((local_value) == ((void *)0)) ; else do { if (  --((PyObject*)(local_value))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(local_value)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(local_value)))); } while (0); } while (0);
	do { if ((local_tb) == ((void *)0)) ; else do { if (  --((PyObject*)(local_tb))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(local_tb)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(local_tb)))); } while (0); } while (0);
	return -1;
}
int main(int argc, char** argv) {
	/* 754 requires that FP exceptions run in "no stop" mode by default,
	* and until C vendors implement C99's ways to control FP exceptions,
	* Python requires non-stop mode.  Alas, some platforms enable FP
	* exceptions by default.  Here we disable them.
	*/
	find_python();
	load_python(NULL);
	if (argc && argv)
	Py_SetProgramName(argv[0]);
	Py_Initialize();
	if (argc && argv)
	PySys_SetArgv(argc, argv);
	{ /* init module '_browse' as '__main__' */
		PyObject* m = ((void *)0);
		__pyx_module_is_main__browse = 1;
		init_browse();
		if (PyErr_Occurred()) {
			PyErr_Print(); /* This exits with the right code if SystemExit. */
			if (Py_FlushLine()) PyErr_Clear();
			return 1;
		}
		do { if ((m) == ((void *)0)) ; else do { if (  --((PyObject*)(m))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(m)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(m)))); } while (0); } while (0);
	}
	Py_Finalize();
	return 0;
}
static __inline void __Pyx_ExceptionSave(PyObject **type, PyObject **value, PyObject **tb) {
	PyThreadState *tstate = (_PyThreadState_Current);
	*type = tstate->exc_type;
	*value = tstate->exc_value;
	*tb = tstate->exc_traceback;
	do { if ((*type) == ((void *)0)) ; else (   ((PyObject*)(*type))->ob_refcnt++); } while (0);
	do { if ((*value) == ((void *)0)) ; else (   ((PyObject*)(*value))->ob_refcnt++); } while (0);
	do { if ((*tb) == ((void *)0)) ; else (   ((PyObject*)(*tb))->ob_refcnt++); } while (0);
}
static void __Pyx_ExceptionReset(PyObject *type, PyObject *value, PyObject *tb) {
	PyObject *tmp_type, *tmp_value, *tmp_tb;
	PyThreadState *tstate = (_PyThreadState_Current);
	tmp_type = tstate->exc_type;
	tmp_value = tstate->exc_value;
	tmp_tb = tstate->exc_traceback;
	tstate->exc_type = type;
	tstate->exc_value = value;
	tstate->exc_traceback = tb;
	do { if ((tmp_type) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_type))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_type)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_type)))); } while (0); } while (0);
	do { if ((tmp_value) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_value))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_value)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_value)))); } while (0); } while (0);
	do { if ((tmp_tb) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp_tb))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp_tb)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp_tb)))); } while (0); } while (0);
}
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, long level) {
	PyObject *py_import = 0;
	PyObject *empty_list = 0;
	PyObject *module = 0;
	PyObject *global_dict = 0;
	PyObject *empty_dict = 0;
	PyObject *list;
	py_import = PyObject_GetAttrString((__pyx_b),("__import__"));
	if (!py_import)
	goto bad;
	if (from_list)
	list = from_list;
	else {
		empty_list = PyList_New(0);
		if (!empty_list)
		goto bad;
		list = empty_list;
	}
	global_dict = PyModule_GetDict(__pyx_m);
	if (!global_dict)
	goto bad;
	empty_dict = PyDict_New();
	if (!empty_dict)
	goto bad;
	{
		if (!module) {
			PyObject *py_level = PyInt_FromLong(level);
			if (!py_level)
			goto bad;
			module = PyObject_CallFunctionObjArgs(py_import,
			name, global_dict, empty_dict, list, py_level, ((void *)0));
			do { if (  --((PyObject*)(py_level))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_level)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_level)))); } while (0);
		}
	}
bad:
	do { if ((empty_list) == ((void *)0)) ; else do { if (  --((PyObject*)(empty_list))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(empty_list)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(empty_list)))); } while (0); } while (0);
	do { if ((py_import) == ((void *)0)) ; else do { if (  --((PyObject*)(py_import))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_import)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_import)))); } while (0); } while (0);
	do { if ((empty_dict) == ((void *)0)) ; else do { if (  --((PyObject*)(empty_dict))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(empty_dict)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(empty_dict)))); } while (0); } while (0);
	return module;
}
static __inline void __Pyx_RaiseImportError(PyObject *name) {
	PyErr_Format(PyExc_ImportError, "cannot import name %.230s",
	PyString_AsString(name));
}
static PyObject *__Pyx_FindPy2Metaclass(PyObject *bases) {
	PyObject *metaclass;
	if (((((((PyObject*)(bases))->ob_type))->tp_flags & ((1L<<26))) != 0) && (((PyVarObject*)(bases))->ob_size) > 0) {
		PyObject *base = (((PyTupleObject *)(bases))->ob_item[0]);
		metaclass = PyObject_GetAttrString(base, (char *)"__class__");
		if (!metaclass) {
			PyErr_Clear();
			metaclass = (PyObject*) (((PyObject*)(base))->ob_type);
		}
	} else {
		metaclass = (PyObject *) &PyClass_Type;
	}
	(   ((PyObject*)(metaclass))->ob_refcnt++);
	return metaclass;
}
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name,
PyObject *modname) {
	PyObject *result;
	PyObject *metaclass;
	if (PyDict_SetItemString(dict, "__module__", modname) < 0)
	return ((void *)0);
	metaclass = PyDict_GetItemString(dict, "__metaclass__");
	if (metaclass) {
		(   ((PyObject*)(metaclass))->ob_refcnt++);
	} else {
		metaclass = __Pyx_FindPy2Metaclass(bases);
	}
	result = PyObject_CallFunctionObjArgs(metaclass, name, bases, dict, ((void *)0));
	do { if (  --((PyObject*)(metaclass))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(metaclass)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(metaclass)))); } while (0);
	return result;
}
static PyObject *
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject *op,  void *closure)
{
	if (op->func_doc == ((void *)0) && op->func.m_ml->ml_doc) {
		op->func_doc = PyString_FromString(op->func.m_ml->ml_doc);
	}
	if (op->func_doc == 0) {
		(   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
		return (&_Py_NoneStruct);
	}
	(   ((PyObject*)(op->func_doc))->ob_refcnt++);
	return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject *op, PyObject *value)
{
	PyObject *tmp = op->func_doc;
	if (value == ((void *)0))
	op->func_doc = (&_Py_NoneStruct); /* Mark as deleted */
	else
	op->func_doc = value;
	(   ((PyObject*)(op->func_doc))->ob_refcnt++);
	do { if ((tmp) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0); } while (0);
	return 0;
}
static PyObject *
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject *op)
{
	if (op->func_name == ((void *)0)) {
		op->func_name = PyString_InternFromString(op->func.m_ml->ml_name);
	}
	(   ((PyObject*)(op->func_name))->ob_refcnt++);
	return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject *op, PyObject *value)
{
	PyObject *tmp;
	if (value == ((void *)0) || !((((((PyObject*)(value))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
		PyErr_SetString(PyExc_TypeError,
		"__name__ must be set to a string object");
		return -1;
	}
	tmp = op->func_name;
	(   ((PyObject*)(value))->ob_refcnt++);
	op->func_name = value;
	do { if ((tmp) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0); } while (0);
	return 0;
}
static PyObject *
__Pyx_CyFunction_get_self(__pyx_CyFunctionObject *m,  void *closure)
{
	PyObject *self;
	self = m->func_closure;
	if (self == ((void *)0))
	self = (&_Py_NoneStruct);
	(   ((PyObject*)(self))->ob_refcnt++);
	return self;
}
static PyObject *
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject *op)
{
	if (op->func_dict == ((void *)0)) {
		op->func_dict = PyDict_New();
		if (op->func_dict == ((void *)0))
		return ((void *)0);
	}
	(   ((PyObject*)(op->func_dict))->ob_refcnt++);
	return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject *op, PyObject *value)
{
	PyObject *tmp;
	if (value == ((void *)0)) {
		PyErr_SetString(PyExc_TypeError,
		"function's dictionary may not be deleted");
		return -1;
	}
	if (!((((((PyObject*)(value))->ob_type))->tp_flags & ((1L<<29))) != 0)) {
		PyErr_SetString(PyExc_TypeError,
		"setting function's dictionary to a non-dict");
		return -1;
	}
	tmp = op->func_dict;
	(   ((PyObject*)(value))->ob_refcnt++);
	op->func_dict = value;
	do { if ((tmp) == ((void *)0)) ; else do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0); } while (0);
	return 0;
}
static PyObject *
__Pyx_CyFunction_get_globals( __pyx_CyFunctionObject *op)
{
	PyObject* dict = PyModule_GetDict(__pyx_m);
	do { if ((dict) == ((void *)0)) ; else (   ((PyObject*)(dict))->ob_refcnt++); } while (0);
	return dict;
}
static PyObject *
__Pyx_CyFunction_get_closure( __pyx_CyFunctionObject *op)
{
	(   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	return (&_Py_NoneStruct);
}
static PyObject *
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject *op)
{
	PyObject* result = (op->func_code) ? op->func_code : (&_Py_NoneStruct);
	(   ((PyObject*)(result))->ob_refcnt++);
	return result;
}
static PyObject *
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject *op)
{
	if (op->defaults_tuple) {
		(   ((PyObject*)(op->defaults_tuple))->ob_refcnt++);
		return op->defaults_tuple;
	}
	if (op->defaults_getter) {
		PyObject *res = op->defaults_getter((PyObject *) op);
		if (res) {
			(   ((PyObject*)(res))->ob_refcnt++);
			op->defaults_tuple = res;
		}
		return res;
	}
	(   ((PyObject*)((&_Py_NoneStruct)))->ob_refcnt++);
	return (&_Py_NoneStruct);
}
static PyGetSetDef __pyx_CyFunction_getsets[] = {
	{(char *) "func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
	{(char *) "__doc__",  (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
	{(char *) "func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
	{(char *) "__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
	{(char *) "__self__", (getter)__Pyx_CyFunction_get_self, 0, 0, 0},
	{(char *) "func_dict", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
	{(char *) "__dict__", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
	{(char *) "func_globals", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
	{(char *) "__globals__", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
	{(char *) "func_closure", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
	{(char *) "__closure__", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
	{(char *) "func_code", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
	{(char *) "__code__", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
	{(char *) "func_defaults", (getter)__Pyx_CyFunction_get_defaults, 0, 0, 0},
	{(char *) "__defaults__", (getter)__Pyx_CyFunction_get_defaults, 0, 0, 0},
	{0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {
	{(char *) "__module__", 6, (size_t)&(((__pyx_CyFunctionObject *)0)->func.m_module), 4, 0},
	{0, 0, 0,  0, 0}
};
static PyObject *
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject *m,  PyObject *args)
{
	return PyString_FromString(m->func.m_ml->ml_name);
}
static PyMethodDef __pyx_CyFunction_methods[] = {
	{("__reduce__"), (PyCFunction)__Pyx_CyFunction_reduce, 0x0001, 0},
	{0, 0, 0, 0}
};
static PyObject *__Pyx_CyFunction_New(PyTypeObject *type, PyMethodDef *ml, int flags,
PyObject *closure, PyObject *module, PyObject* code) {
	__pyx_CyFunctionObject *op = ( (__pyx_CyFunctionObject *) _PyObject_GC_New(type) );
	if (op == ((void *)0))
	return ((void *)0);
	op->flags = flags;
	op->func_weakreflist = ((void *)0);
	op->func.m_ml = ml;
	op->func.m_self = (PyObject *) op;
	do { if ((closure) == ((void *)0)) ; else (   ((PyObject*)(closure))->ob_refcnt++); } while (0);
	op->func_closure = closure;
	do { if ((module) == ((void *)0)) ; else (   ((PyObject*)(module))->ob_refcnt++); } while (0);
	op->func.m_module = module;
	op->func_dict = ((void *)0);
	op->func_name = ((void *)0);
	op->func_doc = ((void *)0);
	op->func_classobj = ((void *)0);
	do { if ((code) == ((void *)0)) ; else (   ((PyObject*)(code))->ob_refcnt++); } while (0);
	op->func_code = code;
	op->defaults_pyobjects = 0;
	op->defaults = ((void *)0);
	op->defaults_tuple = ((void *)0);
	op->defaults_getter = ((void *)0);
	PyObject_GC_Track(op);
	return (PyObject *) op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject *m)
{
	do { if (m->func_closure) { PyObject *_py_tmp = (PyObject *)(m->func_closure); (m->func_closure) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->func.m_module) { PyObject *_py_tmp = (PyObject *)(m->func.m_module); (m->func.m_module) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->func_dict) { PyObject *_py_tmp = (PyObject *)(m->func_dict); (m->func_dict) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->func_name) { PyObject *_py_tmp = (PyObject *)(m->func_name); (m->func_name) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->func_doc) { PyObject *_py_tmp = (PyObject *)(m->func_doc); (m->func_doc) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->func_code) { PyObject *_py_tmp = (PyObject *)(m->func_code); (m->func_code) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->func_classobj) { PyObject *_py_tmp = (PyObject *)(m->func_classobj); (m->func_classobj) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	do { if (m->defaults_tuple) { PyObject *_py_tmp = (PyObject *)(m->defaults_tuple); (m->defaults_tuple) = ((void *)0); do { if (  --((PyObject*)(_py_tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(_py_tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(_py_tmp)))); } while (0); } } while (0);
	if (m->defaults) {
		PyObject **pydefaults = ((PyObject * *)(((__pyx_CyFunctionObject *) (m))->defaults));
		int i;
		for (i = 0; i < m->defaults_pyobjects; i++)
		do { if ((pydefaults[i]) == ((void *)0)) ; else do { if (  --((PyObject*)(pydefaults[i]))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(pydefaults[i])))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(pydefaults[i])))); } while (0); } while (0);
		PyMem_Free(m->defaults);
		m->defaults = ((void *)0);
	}
	return 0;
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
	PyObject_GC_UnTrack(m);
	if (m->func_weakreflist != ((void *)0))
	PyObject_ClearWeakRefs((PyObject *) m);
	__Pyx_CyFunction_clear(m);
	PyObject_GC_Del(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject *m, visitproc visit, void *arg)
{
	do { if (m->func_closure) { int vret = visit((PyObject *)(m->func_closure), arg); if (vret) return vret; } } while (0);
	do { if (m->func.m_module) { int vret = visit((PyObject *)(m->func.m_module), arg); if (vret) return vret; } } while (0);
	do { if (m->func_dict) { int vret = visit((PyObject *)(m->func_dict), arg); if (vret) return vret; } } while (0);
	do { if (m->func_name) { int vret = visit((PyObject *)(m->func_name), arg); if (vret) return vret; } } while (0);
	do { if (m->func_doc) { int vret = visit((PyObject *)(m->func_doc), arg); if (vret) return vret; } } while (0);
	do { if (m->func_code) { int vret = visit((PyObject *)(m->func_code), arg); if (vret) return vret; } } while (0);
	do { if (m->func_classobj) { int vret = visit((PyObject *)(m->func_classobj), arg); if (vret) return vret; } } while (0);
	do { if (m->defaults_tuple) { int vret = visit((PyObject *)(m->defaults_tuple), arg); if (vret) return vret; } } while (0);
	if (m->defaults) {
		PyObject **pydefaults = ((PyObject * *)(((__pyx_CyFunctionObject *) (m))->defaults));
		int i;
		for (i = 0; i < m->defaults_pyobjects; i++)
		do { if (pydefaults[i]) { int vret = visit((PyObject *)(pydefaults[i]), arg); if (vret) return vret; } } while (0);
	}
	return 0;
}
static PyObject *__Pyx_CyFunction_descr_get(PyObject *func, PyObject *obj, PyObject *type)
{
	__pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
	if (m->flags & 0x01) {
		(   ((PyObject*)(func))->ob_refcnt++);
		return func;
	}
	if (m->flags & 0x02) {
		if (type == ((void *)0))
		type = (PyObject *)((((PyObject*)(obj))->ob_type));
		return PyMethod_New(func,
		type, (PyObject *)((((PyObject*)(type))->ob_type)));
	}
	if (obj == (&_Py_NoneStruct))
	obj = ((void *)0);
	return PyMethod_New(func, obj, type);
}
static PyObject*
__Pyx_CyFunction_repr(__pyx_CyFunctionObject *op)
{
	PyObject *func_name = __Pyx_CyFunction_get_name(op);
	return PyString_FromFormat("<cyfunction %s at %p>",
	PyString_AsString(func_name), (void *)op);
}
static PyObject * __Pyx_CyFunction_Call(PyObject *func, PyObject *arg, PyObject *kw) {
	return PyCFunction_Call(func, arg, kw);
}
static PyTypeObject __pyx_CyFunctionType_type = {
	1, 0, 0,
	("cython_function_or_method"), /*tp_name*/
	sizeof(__pyx_CyFunctionObject),   /*tp_basicsize*/
	0,                                  /*tp_itemsize*/
	(destructor) __Pyx_CyFunction_dealloc, /*tp_dealloc*/
	0,                                  /*tp_print*/
	0,                                  /*tp_getattr*/
	0,                                  /*tp_setattr*/
	0,                                  /*tp_compare*/
	(reprfunc) __Pyx_CyFunction_repr,   /*tp_repr*/
	0,                                  /*tp_as_number*/
	0,                                  /*tp_as_sequence*/
	0,                                  /*tp_as_mapping*/
	0,                                  /*tp_hash*/
	__Pyx_CyFunction_Call,              /*tp_call*/
	0,                                  /*tp_str*/
	0,                                  /*tp_getattro*/
	0,                                  /*tp_setattro*/
	0,                                  /*tp_as_buffer*/
	( (1L<<0) | (1L<<1) | (1L<<3) | (1L<<5) | (1L<<6) | (1L<<7) | (1L<<8) | 0 | (1L<<17) | 0) | (1L<<14), /* tp_flags*/
	0,                                  /*tp_doc*/
	(traverseproc) __Pyx_CyFunction_traverse,   /*tp_traverse*/
	(inquiry) __Pyx_CyFunction_clear,   /*tp_clear*/
	0,                                  /*tp_richcompare*/
	(size_t)&(((__pyx_CyFunctionObject *)0)->func_weakreflist), /* tp_weaklistoffse */
	0,                                  /*tp_iter*/
	0,                                  /*tp_iternext*/
	__pyx_CyFunction_methods,           /*tp_methods*/
	__pyx_CyFunction_members,           /*tp_members*/
	__pyx_CyFunction_getsets,           /*tp_getset*/
	0,                                  /*tp_base*/
	0,                                  /*tp_dict*/
	__Pyx_CyFunction_descr_get,         /*tp_descr_get*/
	0,                                  /*tp_descr_set*/
	(size_t)&(((__pyx_CyFunctionObject *)0)->func_dict),/*tp_dictoffset*/
	0,                                  /*tp_init*/
	0,                                  /*tp_alloc*/
	0,                                  /*tp_new*/
	0,                                  /*tp_free*/
	0,                                  /*tp_is_gc*/
	0,                                  /*tp_bases*/
	0,                                  /*tp_mro*/
	0,                                  /*tp_cache*/
	0,                                  /*tp_subclasses*/
	0,                                  /*tp_weaklist*/
	0,                                  /*tp_del*/
	0,                                  /*tp_version_tag*/
};
static int __Pyx_CyFunction_init(void) {
	__pyx_CyFunctionType_type.tp_call = PyCFunction_Call;
	if (PyType_Ready(&__pyx_CyFunctionType_type) < 0)
	return -1;
	__pyx_CyFunctionType = &__pyx_CyFunctionType_type;
	return 0;
}
static __inline void *__Pyx_CyFunction_InitDefaults(PyObject *func, size_t size, int pyobjects) {
	__pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
	m->defaults = PyMem_Malloc(size);
	if (!m->defaults)
	return PyErr_NoMemory();
	memset(m->defaults, 0, sizeof(size));
	m->defaults_pyobjects = pyobjects;
	return m->defaults;
}
static __inline void __Pyx_CyFunction_SetDefaultsTuple(PyObject *func, PyObject *tuple) {
	__pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
	m->defaults_tuple = tuple;
	(   ((PyObject*)(tuple))->ob_refcnt++);
}
static __inline int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {
	if (s1 == s2) {
		return (equals == 2);
	} else if (((((PyObject*)(s1))->ob_type) == &PyString_Type) & ((((PyObject*)(s2))->ob_type) == &PyString_Type)) {
		if ((((PyVarObject*)(s1))->ob_size) != (((PyVarObject*)(s2))->ob_size)) {
			return (equals == 3);
		} else if ((((PyVarObject*)(s1))->ob_size) == 1) {
			if (equals == 2)
			return ((((PyStringObject *)(s1))->ob_sval)[0] == (((PyStringObject *)(s2))->ob_sval)[0]);
			else
			return ((((PyStringObject *)(s1))->ob_sval)[0] != (((PyStringObject *)(s2))->ob_sval)[0]);
		} else {
			int result = memcmp((((PyStringObject *)(s1))->ob_sval), (((PyStringObject *)(s2))->ob_sval), (size_t)(((PyVarObject*)(s1))->ob_size));
			return (equals == 2) ? (result == 0) : (result != 0);
		}
	} else if ((s1 == (&_Py_NoneStruct)) & ((((PyObject*)(s2))->ob_type) == &PyString_Type)) {
		return (equals == 3);
	} else if ((s2 == (&_Py_NoneStruct)) & ((((PyObject*)(s1))->ob_type) == &PyString_Type)) {
		return (equals == 3);
	} else {
		int result;
		PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
		if (!py_result)
		return -1;
		result = __Pyx_PyObject_IsTrue(py_result);
		do { if (  --((PyObject*)(py_result))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_result)))); } while (0);
		return result;
	}
}
static __inline int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals) {
	if (s1 == s2) {
		return (equals == 2);
	} else if (((((PyObject*)(s1))->ob_type) == &PyUnicode_Type) & ((((PyObject*)(s2))->ob_type) == &PyUnicode_Type)) {
		if ((((PyUnicodeObject *)(s1))->length) != (((PyUnicodeObject *)(s2))->length)) {
			return (equals == 3);
		} else if ((((PyUnicodeObject *)(s1))->length) == 1) {
			Py_UNICODE ch1 = (((PyUnicodeObject *)(s1))->str)[0];
			Py_UNICODE ch2 = (((PyUnicodeObject *)(s2))->str)[0];
			return (equals == 2) ? (ch1 == ch2) : (ch1 != ch2);
		} else {
			int result = PyUnicodeUCS2_Compare(s1, s2);
			if ((result == -1) && (PyErr_Occurred()))
			return -1;
			return (equals == 2) ? (result == 0) : (result != 0);
		}
	} else if ((s1 == (&_Py_NoneStruct)) & ((((PyObject*)(s2))->ob_type) == &PyUnicode_Type)) {
		return (equals == 3);
	} else if ((s2 == (&_Py_NoneStruct)) & ((((PyObject*)(s1))->ob_type) == &PyUnicode_Type)) {
		return (equals == 3);
	} else {
		int result;
		PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
		if (!py_result)
		return -1;
		result = __Pyx_PyObject_IsTrue(py_result);
		do { if (  --((PyObject*)(py_result))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_result)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_result)))); } while (0);
		return result;
	}
}
static PyObject *__Pyx_GetStdout(void) {
	PyObject *f = PySys_GetObject((char *)"stdout");
	if (!f) {
		PyErr_SetString(PyExc_RuntimeError, "lost sys.stdout");
	}
	return f;
}
static int __Pyx_Print(PyObject* f, PyObject *arg_tuple, int newline) {
	int i;
	if (!f) {
		if (!(f = __Pyx_GetStdout()))
		return -1;
	}
	(   ((PyObject*)(f))->ob_refcnt++);
	for (i=0; i < (((PyVarObject*)(arg_tuple))->ob_size); i++) {
		PyObject* v;
		if (PyFile_SoftSpace(f, 1)) {
			if (PyFile_WriteString(" ", f) < 0)
			goto error;
		}
		v = (((PyTupleObject *)(arg_tuple))->ob_item[i]);
		if (PyFile_WriteObject(v, f, 1) < 0)
		goto error;
		if (((((((PyObject*)(v))->ob_type))->tp_flags & ((1L<<27))) != 0)) {
			char *s = PyString_AsString(v);
			Py_ssize_t len = PyString_Size(v);
			if (len > 0 &&
					isspace(((unsigned char)((s[len-1]) & 0xff))) &&
					s[len-1] != ' ')
			PyFile_SoftSpace(f, 0);
		}
	}
	if (newline) {
		if (PyFile_WriteString("\n", f) < 0)
		goto error;
		PyFile_SoftSpace(f, 0);
	}
	do { if (  --((PyObject*)(f))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(f)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(f)))); } while (0);
	return 0;
error:
	do { if (  --((PyObject*)(f))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(f)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(f)))); } while (0);
	return -1;
}
static int __Pyx_PrintOne(PyObject* f, PyObject *o) {
	if (!f) {
		if (!(f = __Pyx_GetStdout()))
		return -1;
	}
	(   ((PyObject*)(f))->ob_refcnt++);
	if (PyFile_SoftSpace(f, 0)) {
		if (PyFile_WriteString(" ", f) < 0)
		goto error;
	}
	if (PyFile_WriteObject(o, f, 1) < 0)
	goto error;
	if (PyFile_WriteString("\n", f) < 0)
	goto error;
	do { if (  --((PyObject*)(f))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(f)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(f)))); } while (0);
	return 0;
error:
	do { if (  --((PyObject*)(f))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(f)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(f)))); } while (0);
	return -1;
	/* the line below is just to avoid C compiler
	* warnings about unused functions */
	return __Pyx_Print(f, ((void *)0), 0);
}
static __inline unsigned char __Pyx_PyInt_AsUnsignedChar(PyObject* x) {
	const unsigned char neg_one = (unsigned char)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(unsigned char) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(unsigned char)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to unsigned char" :
				"value too large to convert to unsigned char");
			}
			return (unsigned char)-1;
		}
		return (unsigned char)val;
	}
	return (unsigned char)__Pyx_PyInt_AsUnsignedLong(x);
}
static __inline unsigned short __Pyx_PyInt_AsUnsignedShort(PyObject* x) {
	const unsigned short neg_one = (unsigned short)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(unsigned short) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(unsigned short)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to unsigned short" :
				"value too large to convert to unsigned short");
			}
			return (unsigned short)-1;
		}
		return (unsigned short)val;
	}
	return (unsigned short)__Pyx_PyInt_AsUnsignedLong(x);
}
static __inline unsigned int __Pyx_PyInt_AsUnsignedInt(PyObject* x) {
	const unsigned int neg_one = (unsigned int)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(unsigned int) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(unsigned int)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to unsigned int" :
				"value too large to convert to unsigned int");
			}
			return (unsigned int)-1;
		}
		return (unsigned int)val;
	}
	return (unsigned int)__Pyx_PyInt_AsUnsignedLong(x);
}
static __inline char __Pyx_PyInt_AsChar(PyObject* x) {
	const char neg_one = (char)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(char) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(char)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to char" :
				"value too large to convert to char");
			}
			return (char)-1;
		}
		return (char)val;
	}
	return (char)__Pyx_PyInt_AsLong(x);
}
static __inline short __Pyx_PyInt_AsShort(PyObject* x) {
	const short neg_one = (short)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(short) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(short)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to short" :
				"value too large to convert to short");
			}
			return (short)-1;
		}
		return (short)val;
	}
	return (short)__Pyx_PyInt_AsLong(x);
}
static __inline int __Pyx_PyInt_AsInt(PyObject* x) {
	const int neg_one = (int)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(int) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(int)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to int" :
				"value too large to convert to int");
			}
			return (int)-1;
		}
		return (int)val;
	}
	return (int)__Pyx_PyInt_AsLong(x);
}
static __inline signed char __Pyx_PyInt_AsSignedChar(PyObject* x) {
	const signed char neg_one = (signed char)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(signed char) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(signed char)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to signed char" :
				"value too large to convert to signed char");
			}
			return (signed char)-1;
		}
		return (signed char)val;
	}
	return (signed char)__Pyx_PyInt_AsSignedLong(x);
}
static __inline signed short __Pyx_PyInt_AsSignedShort(PyObject* x) {
	const signed short neg_one = (signed short)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(signed short) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(signed short)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to signed short" :
				"value too large to convert to signed short");
			}
			return (signed short)-1;
		}
		return (signed short)val;
	}
	return (signed short)__Pyx_PyInt_AsSignedLong(x);
}
static __inline signed int __Pyx_PyInt_AsSignedInt(PyObject* x) {
	const signed int neg_one = (signed int)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(signed int) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(signed int)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to signed int" :
				"value too large to convert to signed int");
			}
			return (signed int)-1;
		}
		return (signed int)val;
	}
	return (signed int)__Pyx_PyInt_AsSignedLong(x);
}
static __inline int __Pyx_PyInt_AsLongDouble(PyObject* x) {
	const int neg_one = (int)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if (sizeof(int) < sizeof(long)) {
		long val = __Pyx_PyInt_AsLong(x);
		if ((val != (long)(int)val)) {
			if (!(val == -1 && PyErr_Occurred())) {
				PyErr_SetString(PyExc_OverflowError,
				(is_unsigned && (val < 0)) ?
				"can't convert negative value to int" :
				"value too large to convert to int");
			}
			return (int)-1;
		}
		return (int)val;
	}
	return (int)__Pyx_PyInt_AsLong(x);
}
static __inline unsigned long __Pyx_PyInt_AsUnsignedLong(PyObject* x) {
	const unsigned long neg_one = (unsigned long)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if ((((((x)->ob_type)->tp_flags & ((1L<<23))) != 0))) {
		long val = (((PyIntObject *)(x))->ob_ival);
		if (is_unsigned && (val < 0)) {
			PyErr_SetString(PyExc_OverflowError,
			"can't convert negative value to unsigned long");
			return (unsigned long)-1;
		}
		return (unsigned long)val;
	} else
	if ((((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))) {
		if (is_unsigned) {
			if (((((PyVarObject*)(x))->ob_size) < 0)) {
				PyErr_SetString(PyExc_OverflowError,
				"can't convert negative value to unsigned long");
				return (unsigned long)-1;
			}
			return (unsigned long)PyLong_AsUnsignedLong(x);
		} else {
			return (unsigned long)PyLong_AsLong(x);
		}
	} else {
		unsigned long val;
		PyObject *tmp = __Pyx_PyNumber_Int(x);
		if (!tmp) return (unsigned long)-1;
		val = __Pyx_PyInt_AsUnsignedLong(tmp);
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return val;
	}
}
static __inline unsigned __int64 __Pyx_PyInt_AsUnsignedLongLong(PyObject* x) {
	const unsigned __int64 neg_one = (unsigned __int64)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if ((((((x)->ob_type)->tp_flags & ((1L<<23))) != 0))) {
		long val = (((PyIntObject *)(x))->ob_ival);
		if (is_unsigned && (val < 0)) {
			PyErr_SetString(PyExc_OverflowError,
			"can't convert negative value to unsigned PY_LONG_LONG");
			return (unsigned __int64)-1;
		}
		return (unsigned __int64)val;
	} else
	if ((((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))) {
		if (is_unsigned) {
			if (((((PyVarObject*)(x))->ob_size) < 0)) {
				PyErr_SetString(PyExc_OverflowError,
				"can't convert negative value to unsigned PY_LONG_LONG");
				return (unsigned __int64)-1;
			}
			return (unsigned __int64)PyLong_AsUnsignedLongLong(x);
		} else {
			return (unsigned __int64)PyLong_AsLongLong(x);
		}
	} else {
		unsigned __int64 val;
		PyObject *tmp = __Pyx_PyNumber_Int(x);
		if (!tmp) return (unsigned __int64)-1;
		val = __Pyx_PyInt_AsUnsignedLongLong(tmp);
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return val;
	}
}
static __inline long __Pyx_PyInt_AsLong(PyObject* x) {
	const long neg_one = (long)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if ((((((x)->ob_type)->tp_flags & ((1L<<23))) != 0))) {
		long val = (((PyIntObject *)(x))->ob_ival);
		if (is_unsigned && (val < 0)) {
			PyErr_SetString(PyExc_OverflowError,
			"can't convert negative value to long");
			return (long)-1;
		}
		return (long)val;
	} else
	if ((((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))) {
		if (is_unsigned) {
			if (((((PyVarObject*)(x))->ob_size) < 0)) {
				PyErr_SetString(PyExc_OverflowError,
				"can't convert negative value to long");
				return (long)-1;
			}
			return (long)PyLong_AsUnsignedLong(x);
		} else {
			return (long)PyLong_AsLong(x);
		}
	} else {
		long val;
		PyObject *tmp = __Pyx_PyNumber_Int(x);
		if (!tmp) return (long)-1;
		val = __Pyx_PyInt_AsLong(tmp);
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return val;
	}
}
static __inline __int64 __Pyx_PyInt_AsLongLong(PyObject* x) {
	const __int64 neg_one = (__int64)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if ((((((x)->ob_type)->tp_flags & ((1L<<23))) != 0))) {
		long val = (((PyIntObject *)(x))->ob_ival);
		if (is_unsigned && (val < 0)) {
			PyErr_SetString(PyExc_OverflowError,
			"can't convert negative value to PY_LONG_LONG");
			return (__int64)-1;
		}
		return (__int64)val;
	} else
	if ((((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))) {
		if (is_unsigned) {
			if (((((PyVarObject*)(x))->ob_size) < 0)) {
				PyErr_SetString(PyExc_OverflowError,
				"can't convert negative value to PY_LONG_LONG");
				return (__int64)-1;
			}
			return (__int64)PyLong_AsUnsignedLongLong(x);
		} else {
			return (__int64)PyLong_AsLongLong(x);
		}
	} else {
		__int64 val;
		PyObject *tmp = __Pyx_PyNumber_Int(x);
		if (!tmp) return (__int64)-1;
		val = __Pyx_PyInt_AsLongLong(tmp);
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return val;
	}
}
static __inline signed long __Pyx_PyInt_AsSignedLong(PyObject* x) {
	const signed long neg_one = (signed long)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if ((((((x)->ob_type)->tp_flags & ((1L<<23))) != 0))) {
		long val = (((PyIntObject *)(x))->ob_ival);
		if (is_unsigned && (val < 0)) {
			PyErr_SetString(PyExc_OverflowError,
			"can't convert negative value to signed long");
			return (signed long)-1;
		}
		return (signed long)val;
	} else
	if ((((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))) {
		if (is_unsigned) {
			if (((((PyVarObject*)(x))->ob_size) < 0)) {
				PyErr_SetString(PyExc_OverflowError,
				"can't convert negative value to signed long");
				return (signed long)-1;
			}
			return (signed long)PyLong_AsUnsignedLong(x);
		} else {
			return (signed long)PyLong_AsLong(x);
		}
	} else {
		signed long val;
		PyObject *tmp = __Pyx_PyNumber_Int(x);
		if (!tmp) return (signed long)-1;
		val = __Pyx_PyInt_AsSignedLong(tmp);
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return val;
	}
}
static __inline signed __int64 __Pyx_PyInt_AsSignedLongLong(PyObject* x) {
	const signed __int64 neg_one = (signed __int64)-1, const_zero = 0;
	const int is_unsigned = neg_one > const_zero;
	if ((((((x)->ob_type)->tp_flags & ((1L<<23))) != 0))) {
		long val = (((PyIntObject *)(x))->ob_ival);
		if (is_unsigned && (val < 0)) {
			PyErr_SetString(PyExc_OverflowError,
			"can't convert negative value to signed PY_LONG_LONG");
			return (signed __int64)-1;
		}
		return (signed __int64)val;
	} else
	if ((((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))) {
		if (is_unsigned) {
			if (((((PyVarObject*)(x))->ob_size) < 0)) {
				PyErr_SetString(PyExc_OverflowError,
				"can't convert negative value to signed PY_LONG_LONG");
				return (signed __int64)-1;
			}
			return (signed __int64)PyLong_AsUnsignedLongLong(x);
		} else {
			return (signed __int64)PyLong_AsLongLong(x);
		}
	} else {
		signed __int64 val;
		PyObject *tmp = __Pyx_PyNumber_Int(x);
		if (!tmp) return (signed __int64)-1;
		val = __Pyx_PyInt_AsSignedLongLong(tmp);
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return val;
	}
}
static void __Pyx_WriteUnraisable(const char *name,  int clineno,
int lineno,  const char *filename) {
	PyObject *old_exc, *old_val, *old_tb;
	PyObject *ctx;
	__Pyx_ErrFetch(&old_exc, &old_val, &old_tb);
	ctx = PyString_FromString(name);
	__Pyx_ErrRestore(old_exc, old_val, old_tb);
	if (!ctx) {
		PyErr_WriteUnraisable((&_Py_NoneStruct));
	} else {
		PyErr_WriteUnraisable(ctx);
		do { if (  --((PyObject*)(ctx))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(ctx)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(ctx)))); } while (0);
	}
}
static int __Pyx_check_binary_version(void) {
	char ctversion[4], rtversion[4];
	PyOS_snprintf(ctversion, 4, "%d.%d", 2, 7);
	PyOS_snprintf(rtversion, 4, "%s", Py_GetVersion());
	if (ctversion[0] != rtversion[0] || ctversion[2] != rtversion[2]) {
		char message[200];
		PyOS_snprintf(message, sizeof(message),
		"compiletime version %s of module '%.100s' "
		"does not match runtime version %s",
		ctversion, "_browse", rtversion);
		return PyErr_WarnEx(((void *)0), message, 1);
	}
	return 0;
}
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
	int start = 0, mid = 0, end = count - 1;
	if (end >= 0 && code_line > entries[end].code_line) {
		return count;
	}
	while (start < end) {
		mid = (start + end) / 2;
		if (code_line < entries[mid].code_line) {
			end = mid;
		} else if (code_line > entries[mid].code_line) {
			start = mid + 1;
		} else {
			return mid;
		}
	}
	if (code_line <= entries[mid].code_line) {
		return mid;
	} else {
		return mid + 1;
	}
}
static PyCodeObject *__pyx_find_code_object(int code_line) {
	PyCodeObject* code_object;
	int pos;
	if ((!code_line) || (!__pyx_code_cache.entries)) {
		return ((void *)0);
	}
	pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
	if ((pos >= __pyx_code_cache.count) || (__pyx_code_cache.entries[pos].code_line != code_line)) {
		return ((void *)0);
	}
	code_object = __pyx_code_cache.entries[pos].code_object;
	(   ((PyObject*)(code_object))->ob_refcnt++);
	return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
	int pos, i;
	__Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
	if ((!code_line)) {
		return;
	}
	if ((!entries)) {
		entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64*sizeof(__Pyx_CodeObjectCacheEntry));
		if ((entries)) {
			__pyx_code_cache.entries = entries;
			__pyx_code_cache.max_count = 64;
			__pyx_code_cache.count = 1;
			entries[0].code_line = code_line;
			entries[0].code_object = code_object;
			(   ((PyObject*)(code_object))->ob_refcnt++);
		}
		return;
	}
	pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
	if ((pos < __pyx_code_cache.count) && (__pyx_code_cache.entries[pos].code_line == code_line)) {
		PyCodeObject* tmp = entries[pos].code_object;
		entries[pos].code_object = code_object;
		do { if (  --((PyObject*)(tmp))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(tmp)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(tmp)))); } while (0);
		return;
	}
	if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
		int new_max = __pyx_code_cache.max_count + 64;
		entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
		__pyx_code_cache.entries, new_max*sizeof(__Pyx_CodeObjectCacheEntry));
		if ((!entries)) {
			return;
		}
		__pyx_code_cache.entries = entries;
		__pyx_code_cache.max_count = new_max;
	}
	for (i=__pyx_code_cache.count; i>pos; i--) {
		entries[i] = entries[i-1];
	}
	entries[pos].code_line = code_line;
	entries[pos].code_object = code_object;
	__pyx_code_cache.count++;
	(   ((PyObject*)(code_object))->ob_refcnt++);
}
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
const char *funcname, int c_line,
int py_line, const char *filename) {
	PyCodeObject *py_code = 0;
	PyObject *py_srcfile = 0;
	PyObject *py_funcname = 0;
	py_srcfile = PyString_FromString(filename);
	if (!py_srcfile) goto bad;
	if (c_line) {
		py_funcname = PyString_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
	}
	else {
		py_funcname = PyString_FromString(funcname);
	}
	if (!py_funcname) goto bad;
	py_code = /*int argcount,*//*int kwonlyargcount,*//*int nlocals,*//*int stacksize,*//*int flags,*//*PyObject *code,*//*PyObject *consts,*//*PyObject *names,*//*PyObject *varnames,*//*PyObject *freevars,*//*PyObject *cellvars,*//*PyObject *filename,*//*PyObject *name,*//*int firstlineno,*//*PyObject *lnotab*/PyCode_New(0, 0, 0, 0, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, py_srcfile, py_funcname, py_line, __pyx_empty_bytes);
	do { if (  --((PyObject*)(py_srcfile))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_srcfile)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_srcfile)))); } while (0);
	do { if (  --((PyObject*)(py_funcname))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_funcname)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_funcname)))); } while (0);
	return py_code;
bad:
	do { if ((py_srcfile) == ((void *)0)) ; else do { if (  --((PyObject*)(py_srcfile))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_srcfile)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_srcfile)))); } while (0); } while (0);
	do { if ((py_funcname) == ((void *)0)) ; else do { if (  --((PyObject*)(py_funcname))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_funcname)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_funcname)))); } while (0); } while (0);
	return ((void *)0);
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
int py_line, const char *filename) {
	PyCodeObject *py_code = 0;
	PyObject *py_globals = 0;
	PyFrameObject *py_frame = 0;
	py_code = __pyx_find_code_object(c_line ? c_line : py_line);
	if (!py_code) {
		py_code = __Pyx_CreateCodeObjectForTraceback(
		funcname, c_line, py_line, filename);
		if (!py_code) goto bad;
		__pyx_insert_code_object(c_line ? c_line : py_line, py_code);
	}
	py_globals = PyModule_GetDict(__pyx_m);
	if (!py_globals) goto bad;
	py_frame = PyFrame_New(_PyThreadState_Current,py_code,py_globals,0);
	if (!py_frame) goto bad;
	py_frame->f_lineno = py_line;
	PyTraceBack_Here(py_frame);
bad:
	do { if ((py_code) == ((void *)0)) ; else do { if (  --((PyObject*)(py_code))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_code)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_code)))); } while (0); } while (0);
	do { if ((py_frame) == ((void *)0)) ; else do { if (  --((PyObject*)(py_frame))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(py_frame)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(py_frame)))); } while (0); } while (0);
}
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
	while (t->p) {
		if (t->is_unicode) {
			*t->p = PyUnicodeUCS2_DecodeUTF8(t->s, t->n - 1, ((void *)0));
		} else if (t->intern) {
			*t->p = PyString_InternFromString(t->s);
		} else {
			*t->p = PyString_FromStringAndSize(t->s, t->n - 1);
		}
		if (!*t->p)
		return -1;
		++t;
	}
	return 0;
}
/* Type Conversion Functions */
static __inline int __Pyx_PyObject_IsTrue(PyObject* x) {
	int is_true = x == ((PyObject *) &_Py_TrueStruct);
	if (is_true | (x == ((PyObject *) &_Py_ZeroStruct)) | (x == (&_Py_NoneStruct))) return is_true;
	else return PyObject_IsTrue(x);
}
static __inline PyObject* __Pyx_PyNumber_Int(PyObject* x) {
	PyNumberMethods *m;
	const char *name = ((void *)0);
	PyObject *res = ((void *)0);
	if (((((x)->ob_type)->tp_flags & ((1L<<23))) != 0) || ((((((PyObject*)(x))->ob_type))->tp_flags & ((1L<<24))) != 0))
	return (   ((PyObject*)(x))->ob_refcnt++), x;
	m = (((PyObject*)(x))->ob_type)->tp_as_number;
	if (m && m->nb_int) {
		name = "int";
		res = PyNumber_Int(x);
	}
	else if (m && m->nb_long) {
		name = "long";
		res = PyNumber_Long(x);
	}
	if (res) {
		if (!((((res)->ob_type)->tp_flags & ((1L<<23))) != 0) && !((((((PyObject*)(res))->ob_type))->tp_flags & ((1L<<24))) != 0)) {
			PyErr_Format(PyExc_TypeError,
			"__%s__ returned non-%s (type %.200s)",
			name, name, (((PyObject*)(res))->ob_type)->tp_name);
			do { if (  --((PyObject*)(res))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(res)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(res)))); } while (0);
			return ((void *)0);
		}
	}
	else if (!PyErr_Occurred()) {
		PyErr_SetString(PyExc_TypeError,
		"an integer is required");
	}
	return res;
}
static __inline Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject* b) {
	Py_ssize_t ival;
	PyObject* x = PyNumber_Index(b);
	if (!x) return -1;
	ival = PyInt_AsSsize_t(x);
	do { if (  --((PyObject*)(x))->ob_refcnt != 0) ; else (   (*(((PyObject*)((PyObject *)(x)))->ob_type)->tp_dealloc)((PyObject *)((PyObject *)(x)))); } while (0);
	return ival;
}
static __inline PyObject * __Pyx_PyInt_FromSize_t(size_t ival) {
	return PyInt_FromSize_t(ival);
}
static __inline size_t __Pyx_PyInt_AsSize_t(PyObject* x) {
	unsigned __int64 val = __Pyx_PyInt_AsUnsignedLongLong(x);
	if ((val == (unsigned __int64)-1 && PyErr_Occurred())) {
		return (size_t)-1;
	} else if ((val != (unsigned __int64)(size_t)val)) {
		PyErr_SetString(PyExc_OverflowError,
		"value too large to convert to size_t");
		return (size_t)-1;
	}
	return (size_t)val;
}
