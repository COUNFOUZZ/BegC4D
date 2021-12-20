//
//  main.c
//  ex1210
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>

int main()
{
    char prenom[16], nom[16];
    
    printf("Quel est votre prénom ? ");
    fgets(prenom, 16, stdin);
    printf("Quel est votre nom ? ");
    fgets(nom, 16, stdin);
    printf("Ravi de vous rencontrer %s %s\n", prenom, nom);
    return 0;
}
