//
//  main.c
//  ex1316
//
//  Created by Alexis Abda on 28/11/2021.
//

#include <stdio.h>
#define TAILLE 4

int main()
{
    char tab[TAILLE][2][11] = {
        {"George", "Washington"},
        {"John", "Adams"},
        {"Thomas", "Jefferson"},
        {"James", "Monroe"}
    };
    
    int i;
    
    for(i=0;i<TAILLE;i++)
        printf("%-6s %-10s\n", tab[i][0], tab[i][1]);
    
    return 0;
}
