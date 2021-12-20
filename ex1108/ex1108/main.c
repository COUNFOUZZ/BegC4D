//
//  main.c
//  ex1108
//
//  Created by Alexis Abda on 17/11/2021.
//

#include <stdio.h>

#define VALEUR 3

int main()
{
    int a;
    
    printf("Modulus %d:\n", VALEUR);
    for (a = 0; a < 30; a++)
        printf("%d %% %d = %d\n", a, VALEUR, a%VALEUR);
    return 0;
}
