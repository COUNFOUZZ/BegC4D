//
//  main.c
//  ex1906
//
//  Created by Alexis Abda on 17/12/2021.
//

#include <stdio.h>

int main()
{
    int nombre[10];
    int x;
    int *pn;
    
    pn = nombre;        //Initialise le pointeur.
    
                        //Remplissage du tableau
    for (x=0; x<10; x++)
    {
        *pn = x + 1;
        pn++;
    }
    pn = nombre;        //Re initialiser le pointeur
                        //Afficher le tableau
    for (x=0; x<10; x++)
    {
        printf("nombre[%d] = %d\t\tadresse : %p\n", x+1, *pn, pn);
        pn++;
    }
        
    return 0;
}
