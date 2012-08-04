@echo off
python.exe gendecls.py
if errorlevel 1 exit /B %ERRORLEVEL%
cython -o ..\..\src\_browse.c -D --embed -Xboundscheck=False,fast_getattr=True,optimize.inline_defnode_calls=True,binding=True ..\..\src\_browse.pyx
