//
//  main.c
//  ex1808
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    int tab[5] = { 100, 200, 300, 400, 500 };
    int x;
    
    for (x=0; x<5; x++)
        printf("%d à l'adresse : %p\n", tab[x], &tab[x]);
    return 0;
}
