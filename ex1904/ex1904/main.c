//
//  main.c
//  ex1904
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
    
                        //Afficher le tableau
    for (x=0; x<10; x++)
        printf("nombre[%d] = %d\n", x+1, nombre[x]);
        
    return 0;
}
