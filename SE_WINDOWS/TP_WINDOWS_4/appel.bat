@ECHO OFF
REM fichier de commandes qui appelle un autre fichier de commandes
SET /P dividende=Saisir un entier :
SET /P diviseur=Saisir un entier non nul :
IF /I %diviseur% NEQ 0 (
	CALL division %dividende% %diviseur%
) ELSE (
	ECHO Le dernier entier saisi est nul.
)
PAUSE