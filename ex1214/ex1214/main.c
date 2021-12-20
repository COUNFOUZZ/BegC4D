//
//  main.c
//  ex1214
//
//  Created by Alexis Abda on 21/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 40

int main()
{
    int tab[40];
    int i, interne, externe, temp;
    
    //  Initialisation de la seed
    srand((unsigned)time(NULL));
    
    //  Boucle qui permet d'attribuer 40 valeurs aléatoire à au tableau
    for (i=0; i<TAILLE; i++)
    {
        //  Limiter les valeurs aléatoire à 100
        tab[i] = rand() % 100 + 1;
    }
    putchar('\n');
    putchar('\n');

    //  Afficher le tableau
    puts("Tableau de base :");
    for (i=0; i<TAILLE; i++)
    {
        printf("%d\t", tab[i]);
    }
    
    //  Trier le tableau
    for (externe=0; externe<TAILLE-1; externe++)
    {
        for (interne=externe+1; interne<TAILLE; interne++)
        {
            if (tab[externe] > tab[interne])
            {
                temp = tab[externe];
                tab[externe] = tab[interne];
                tab[interne] = temp;
            }
        }
    }
    putchar('\n');
    putchar('\n');

    //  Afficher le tableau trié
    puts("Tableau trié :");
    for (i=0; i<TAILLE; i++)
    {
        printf("%d\t", tab[i]);
    }
    putchar('\n');
    
    return 0;
}
