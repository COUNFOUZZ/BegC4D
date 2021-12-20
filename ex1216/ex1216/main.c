//
//  main.c
//  ex1216
//
//  Created by Alexis Abda on 21/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 19

int main()
{
    char tab[] = "Vive le langage C !";
    int i, interne, externe, temp;
    
    
    //  Afficher le tableau de caractères de base
    puts("Tableau de caractères de base :");
    for (i=0; i<TAILLE; i++)
        printf("%c", tab[i]);
    
    putchar('\n');
    
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
    puts("Tableau de caractères trié :");
    for (i=0; i<TAILLE; i++)
        printf("%c", tab[i]);
    putchar('\n');

    return 0;
}
