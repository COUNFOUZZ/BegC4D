//
//  main.c
//  ex1909
//
//  Created by Alexis Abda on 17/12/2021.
//

#include <stdio.h>

int main()
{
    char tab[27];
    int x;
    char *pn;
    
    pn = tab;   /* Initialisation du poineur */
    
    /* Remplissage du poineuteur */
    for (x=0; x<26; x++)
        *pn++ = x + 'A';
    
    
    pn = tab;   /* Initialisation du pointeur */
    
    /* Affichage du tableau */
    for (x=0; x<26; x++)
        putchar(*pn++);
    putchar('\n');

    return 0;
}
