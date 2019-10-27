@ECHO OFF
SET /P x=Entrez une chaine de caracteres 
SET /P y=Entrez une deuxieme chaine de caracteres 
SET /P z=Entrez la derniere chaine de caracteres 
IF %x% EQU %y% ( 
	IF %y% EQU %z% ( 
		ECHO Toutes identiques
	) ELSE ( 
		ECHO 3
	)
) ELSE (
	IF %x% EQU %z% (
		ECHO 2
	) ELSE (
		IF %y% EQU %z% (
			ECHO 1
		)	ELSE (
				ECHO Toutes differentes
			)
	)
)

PAUSE
