//
//  main.c
//  ex0514
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

#define VALEUR 3
#define VALEUR2 1

int main()
{
    printf("La valeur est %d\n", VALEUR);
    printf("et %d est bien la valeur.\n", VALEUR);
    printf("Ce n'est pas %d,\n", VALEUR+VALEUR2);
    printf("ni %d non plus.\n", VALEUR-VALEUR2);
    printf("Non, la valeur reste %d.\n", VALEUR);
    return 0;
}
