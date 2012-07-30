## DyPy (Dynamic Python)

This project came about based on some ideas I had while messing around with sourcecode from the [py2exe](http://www.py2exe.org/) project. In addition to some of the ideas found there, the project also borrows a few of its functions to do some of the initial setup work.

The idea is to create a solution for embedding python using existing python installations on the end-user's computer. Now, this is doable already, but due to the differences in API between Python versions, and the different binary names, you'd currently have to build a different version of your application for each Python version you wanted to support. This project aims to do this by dynamically finding and loading the most suitable version of Python currently installed. (Taking processor architecture differences into consideration) At the moment, only Python 2 is supported, but I may look into supporting Python 3 if the project gets any interest.

Currently, it supports the following methods for locating a user's Python installation:

* First, it checks the user's environment variables for a variable named PYTHON. If it exists and correctly points at a valid Python executable, it will use that.
* Next, it searches the user's current PATH. For each python executable it finds, it will run a few checks, and if one of them seems kosher, it will use that.
* Lastly, it checks the user's registry for an installation, starting from the lowest valid minor version to the highest.

The end goal is to provide a framework that is completely API-compatible with the standard CPYthon C-API, allowing for users to build against it without needing to make any changes to their code, other than adding a call to load_python to initalize the framework. (Unless I end up thinking of a place I can sneak that call into among the existing API)

Currently still a massive work in progress, but with a little extra work, it can currently do some basic embedding. The project currently in the repository will build a cythonized (with some modifications) copy of [ninja](http://martine.github.com/ninja/)'s "browse" command. Most of the functions exported from the standard Python DLL are already set up to load, but many of the variables, etc that are exported from the DLL have yet to be prototyped. Additionally, a lot of the macros found in standard Python headers haven't made their way in yet.

##### ToDo:

* Finish off adding the remaining preprocessor macros and exported data. Consider writing a script to automate these two processes. possibly using Clang or hacking up protoc.
* General cleanup.
* Get some tests going.
* Consider renaming the various functions and global variables to better coincide with the existing Python C-API.
* Some refactoring and basic improvements in findpython.c, as well as all over the headers included from Python.h.
* Do some benchmarks to determine if there would be any performance advantages in lazy-loading the functions.
* Add support for Win64.
* Research on the differences between Stackless and CPython to decide whether or not it would be worth the trouble of attempting to support Stackless.
* Write a ninja build for the project. (Just because)