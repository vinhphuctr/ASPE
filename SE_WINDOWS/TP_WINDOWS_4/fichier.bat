@ECHO OFF
FOR /F "eol=- delims=; tokens=1,3,*" %%i IN (TEST\test.txt) DO ECHO %%i %%j %%k
PAUSE