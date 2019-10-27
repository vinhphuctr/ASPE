@ECHO OFF
DATE > date.txt
FOR /F "eol=E delims=: tokens=2" %%i IN (date.txt) DO ECHO %%i
PAUSE
