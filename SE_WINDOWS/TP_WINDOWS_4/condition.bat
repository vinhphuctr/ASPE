@ECHO OFF
SET nom_fichier=essai
IF EXIST %nom_fichier% (
			TYPE %nom_fichier%)
) ELSE (
			ECHO Le fichier %nom_fichier% n'existe pas.
)
PAUSE