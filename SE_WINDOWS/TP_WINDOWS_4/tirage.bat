@ECHO OFF
FOR /L %%n IN (1,1,5) DO CALL : affichage %%n
PAUSE
GOTO :EOF

:affichage
SET k=%1
SET x=%RANDOM%
ECHO Le tirage numero %k% vaut %x%.