//
//  main.c
//  ex1212
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>

int main()
{
    char prenom[16], nom[16];
    
    printf("Quel est votre prénom ? ");
    scanf("%15s", prenom);
    printf("Quel est votre nom ? ");
    scanf("%15s", nom);
    printf("Ravi de vous rencontrer %s %s\n", prenom, nom);
    return 0;
}
