#ifndef _FIND_PYTHON_H_
#define _FIND_PYTHON_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Configuration variables.
PyAPI_FUNC(char) python_version[];
PyAPI_FUNC(char) python_api_string[];
PyAPI_DATA(int) python_api_version;
PyAPI_FUNC(char) python_prefix[];
PyAPI_FUNC(char) python_library[];

// Find a python installation to use.
PyAPI_FUNC(BOOL) DynPy_FindPython();

#ifdef __cplusplus
}
#endif

#endif /* _FIND_PYTHON_H_ */
