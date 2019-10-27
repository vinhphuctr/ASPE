@ECHO OFF

SET ext=%2
SET nom2=%1
SET n=1

IF "%2" == "" ( 
	ECHO Pas assez d'arguments 
	GOTO fin
)
IF "%3" NEQ "" ( 
	ECHO Trop d'arguments
	GOTO fin
)
If NOT EXIST *.%ext% ( 
	ECHO Il n'y a pas de fichiers de ce type 
	GOTO fin
)

FOR %%v IN (*.%ext%) DO CALL :reno %%v


:reno
set nom=%~n1
REN %nom%.%ext% %nom2%%n%.%ext%
SET /A n+=1

:fin 

PAUSE
