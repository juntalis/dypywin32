#ifndef _FIND_PYTHON_H_
#define _FIND_PYTHON_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Configuration variables.
char python_version[];
int python_api_version;
char python_prefix[];
char python_library[];

// Since our api version depends on our module, define this
// macro so that when importing, python uses the right API version.
#define PYTHON_API_VERSION python_api_version

// Find a python installation to use.
CEXTERN_DECL BOOL find_python();

#ifdef __cplusplus
}
#endif

#endif /* _FIND_PYTHON_H_ */
