//
//  main.c
//  ex1924
//
//  Created by Alexis Abda on 14/01/2022.
//

#include <stdio.h>

void remiser(float *a);

int main()
{
    float prixbase = 42.99;
    float *p = &prixbase;
    
    printf("L'article coute $%.2f\n", prixbase);
    remiser(p);
    printf("Après remise, cela donne $%.2f\n", prixbase);
    return(0);
}

void remiser(float *a)
{
    *a = *a * 0.90;
}
