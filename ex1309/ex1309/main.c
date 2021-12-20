//
//  main.c
//  ex1309
//
//  Created by Alexis Abda on 27/11/2021.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char motpasse[] = "taco";
    char tabsaisie[15];
    
    printf("Le mot de passe ? ");
    scanf("%s", tabsaisie);
    
    if(strcasecmp(tabsaisie, motpasse) == 0)
        puts("Mot de passe correct");
    else
        puts("Mauvais mot de passe. Alertez la DGSE.");
    return 0;
}
