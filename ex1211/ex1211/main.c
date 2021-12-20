//
//  main.c
//  ex1211
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>

int main()
{
    char prenom[16], nom[16];
    
    printf("Quel est votre prénom ? ");
    scanf("%s", prenom);
    printf("Quel est votre nom ? ");
    scanf("%s", nom);
    printf("Ravi de vous rencontrer %s %s\n", prenom, nom);
    return 0;
}
