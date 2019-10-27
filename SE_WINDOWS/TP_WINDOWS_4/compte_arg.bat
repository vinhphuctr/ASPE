@ECHO OFF
REM fichier de commandes qui affiche et compte les
REM arguments passes en ligne de commande
SET n=0
:copie
IF "%1"=="" GOTO fin
SET /A n+=1
ECHO argument %n% = %1
SHIFT
GOTO copie

:fin
ECHO nombre d'argument(s) lu(s) = %n%
PAUSE