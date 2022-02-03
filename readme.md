# BegC4D
## TO-DO
1. Corriger l'exercice "ex2306".

## Erreur dans le livre:

### Chapitre 17 dans l'ère binaire :

Page 278 :
Dans le tableau des "Valeurs binaires négatives"
Dans l'exemple, ils expliquent que si la variable est de type `signed` et que le bit le plus à gauche est armé (*le bit possède la valeur 1*) alors la valeur sera négative. Or leur exemple est incorrect.

Exemple qu'ils donnent :

1. `1 0 0 0 0 0 0 0` = `-128`
2. `1 0 0 0 0 0 0 1` = `-129`
3. `1 0 0 0 0 0 1 0` = `-130`
###### *L'exemple est donné avec un `signed char` or on sait que la plage de valeurs d'un `signed char` est entre `-128 à 127`*

Dans l'exemple ci-dessus, seul le premier exemple est juste.

*Correction :*

1. `1 0 0 0 0 0 0 0` = `-128`
2. `1 0 0 0 0 0 0 1` = `-127`
3. `1 0 0 0 0 0 1 0` = `-126`
