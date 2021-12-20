//
//  main.c
//  ex1219
//
//  Created by Alexis Abda on 23/11/2021.
//

#include <stdio.h>

#define TAILLE 3

int main()
{
    char president[TAILLE][8] = {
        "Sarkozy",
        "Coty",
        "Grevy"
    };
    int x;
    
    for (x=0; x<TAILLE; x++)
    {
        puts(president[x]);
    }
    return 0;
}
