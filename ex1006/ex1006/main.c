//
//  main.c
//  ex1006
//
//  Created by Alexis Abda on 16/11/2021.
//

#include <stdio.h>

void graph(int cmptr);

int main()
{
    int valeur;
    
    valeur = 2;
    
    while (valeur <= 64)
    {
        graph(valeur);
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2;
    }
    return 0;
}

void graph(int cmptr)
{
    int x;
    
    for (x = 0; x < cmptr; x = x + 1)
        putchar('*');
    putchar('\n');
}
