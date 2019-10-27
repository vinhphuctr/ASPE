@ECHO OFF

SET /P x=Entrez une extension de fichier a modifier : 
SET /P y=Entrez la nouvelle extension : 

if not exist *.%x% ( ECHO Le fichier demande n'existe pas. )

FOR %%v IN (*.%x%) DO REN *.%x% *.%y%

:fin
PAUSE



rem FOR %%v IN (*.%x%) DO CALL :reno %%v
rem :reno
rem set nom=%~n1
rem REN nom.%x% nom.%y%