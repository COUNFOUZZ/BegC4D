//
//  main.c
//  ex0718
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

int main()
{
    char nom[30];
    
    printf("Veuillez indiquer votre prénom ainsi que votre nom : ");
    fgets(nom, 30, stdin);
    printf("Ravi de vous saluer, %s.\n", nom);
    return 0;
}




/*      FONCTIONNEL MAIS PAS ERGONOMIQUE ET LE NOM PASSE A LA LIGNE
int main()
{
    char prenom[15], nom[15];
    
    printf("Veuillez indiquer votre prénom : ");
    fgets(prenom, 15, stdin);
    printf("Veuillez indiquer votre nom de famille : ");
    fgets(nom, 15, stdin);
    printf("Ravi de vous saluer, %s %s.\n", prenom, nom);
    
    return 0;
}
*/
