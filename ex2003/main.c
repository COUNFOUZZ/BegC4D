//
//  main.c
//  ex2003
//
//  Created by Alexis Abda on 16/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *t, i;

    //  Allocation de la mémoire
    t = (int *)malloc(sizeof(int)*3);
    if(t == NULL)
    {
        puts("Allocation mémoire impossible");
        exit(1);
    }

    for(i = 0; i < 3; i++)
    {
        //  Génération des valeurs
        *(t+i) = (i + 1) * 100;
        //  Affichage des valeurs
        printf("%d\n", *t);
    }

    return(0);
}
