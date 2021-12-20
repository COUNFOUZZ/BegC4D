//
//  main.c
//  ex1405
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
    }, pres2 = {
        "John Adams",
        1797
    };
    
    printf("Le premier president est %s\n", pres1.nomPres);
    printf("Il a pris ses fonctions en %d\n", pres1.anneeNomi);
    putchar('\n');
    printf("Le deuxième president est %s\n", pres2.nomPres);
    printf("Il a pris ses fonctions en %d\n", pres2.anneeNomi);
    return 0;
}
