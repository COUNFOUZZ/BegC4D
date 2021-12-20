//
//  main.c
//  ex1213
//
//  Created by Alexis Abda on 21/11/2021.
//

#include <stdio.h>

#define TAILLE 6

int main()
{
    int tabulles[] = { 95, 60, 6, 87, 50, 24};
    int interne, externe, temp, x;
    
    // Affiche le tableau initial
    puts("Tableau de départ :");
    for (x=0; x<TAILLE; x++)
        printf("%d\t", tabulles[x]);
    putchar('\n');
    
    //tabulles sort
    for (externe=0; externe<TAILLE-1; externe++)
    {
        for (interne=externe+1; interne<TAILLE; interne++)
        {
            if (tabulles[externe] > tabulles[interne])
            {
                temp = tabulles[externe];
                tabulles[externe] = tabulles[interne];
                tabulles[interne] = temp;
            }
        }
    }
    
    //Affiche le tableau après tri
    puts("Tableau après tri :");
    for (x=0; x<TAILLE; x++)
        printf("%d\t", tabulles[x]);
    putchar('\n');
    return 0;
}
