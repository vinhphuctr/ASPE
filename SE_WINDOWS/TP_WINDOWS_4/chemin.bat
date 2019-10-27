@ECHO OFF
REM fichier de commandes qui affiche uniquement le nom de fichier
REM des fichiers d'extension .bat du répertoire courant
FOR %%v IN (*.bat) DO ECHO %%~nv
PAUSE