//
//  main.c
//  ex1207
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int tab1[] = {10, 12, 14, 15, 16, 18, 20};
    float tab2[7];
    int x;
    
    puts("Tableau 1");
    for (x=0; x<tab1[x]; x++)
    {
        printf("Valeur tab1 %d.\t%d\n", x+1, tab1[x]);
    }
    
    putchar('\n');
    
    puts("Tableau 2 racine carré du tableau 1");
    for (x=0; x<tab1[x]; x++)
    {
        tab2[x] = sqrt(tab1[x]);
        printf("Racine carré de %d = %.2f\n", tab1[x], tab2[x]);
    }
    return 0;
}
