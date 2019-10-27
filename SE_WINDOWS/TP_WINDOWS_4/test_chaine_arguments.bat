@ECHO OFF

IF "%3"=="" (
	ECHO Pas assez d'arguments
	GOTO FIN
)
IF "%4" NEQ "" (
	ECHO Trop d'arguments
	GOTO FIN
)

IF %1 == %2 ( 
	IF %2 == %3 ( 
		ECHO Toutes identiques
	) ELSE ( 
		ECHO 3
	)
) ELSE (
	IF %1 == %3 (
		ECHO 2
	) ELSE (
		IF %2 == %3 (
			ECHO 1
		)	ELSE (
				ECHO Toutes differentes
			)
	)
)

:FIN

PAUSE
