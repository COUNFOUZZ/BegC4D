//
//  main.c
//  ex0815
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int coordonnee;
    
    printf("Coordonnées de la cible : ");
    scanf("%d", &coordonnee);
    if (coordonnee < -5 || coordonnee < 5)
    {
        puts("Assez proche !");
    }
    else
    {
        puts("La cible est encore loin !");
    }
    return 0;
}
