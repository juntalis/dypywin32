@msvcc.bat cxx "%~dp0dll2def.cpp" "%~dp0pe3264h.cpp" -link -LTCG -OPT:REF -OPT:ICF "-OUT:%~dp0..\..\bin\dll2def.exe"
@if errorlevel 1 exit /B %ERRORLEVEL%