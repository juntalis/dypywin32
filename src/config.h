/* Definitions for various aspects of Python on Windows */

// Python executable to find.
#define PYTHON_EXE "python.exe"

// Python registry entry.
#define PYTHON_REG "SOFTWARE\\Python\\PythonCore\\%d.%d\\InstallPath"

// Python 2 Minor Version minimum/maximum support
#define PYTHON2_MINOR_MIN 5
#define PYTHON2_MINOR_MAX 7

// Note: Python 3 not yet supported, but we'll put it in anyways
#define PYTHON3_MINOR_MIN 0
#define PYTHON3_MINOR_MAX 2
