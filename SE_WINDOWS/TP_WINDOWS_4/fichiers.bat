@ECHO OFF
REM fichier de commande qui affiche tous les fichiers du 
REM repertoire courant et de ses repertoires
FOR /R %%a IN (*.*) DO ECHO %%a 
PAUSE