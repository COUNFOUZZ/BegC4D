//
//  main.c
//  ex0713
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

int main()
{
    char prenom[15], nom[15];
    
    printf("Veuillez indiquer votre prénom : ");
    scanf("%s", prenom);
    printf("Veuillez indiquer votre nom de famille : ");
    scanf("%s", nom);
    printf("Ravi de vous saluer, %s %s.\n", prenom, nom);
    
    return 0;
}
