//
//  main.c
//  ex1404
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

int main()
{
    struct president
    {
        char nomPres[40];
        int anneeNomi;
    } pres1 = {
        "George Washington",
        1789
    };
    
    printf("Le premier president est %s\n", pres1.nomPres);
    printf("Il a pris ses fonctions en %d\n", pres1.anneeNomi);
    return 0;
}
