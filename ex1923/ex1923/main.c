//
//  main.c
//  ex1923
//
//  Created by Alexis Abda on 14/01/2022.
//

#include <stdio.h>

void remiser(float *a);

int main()
{
    float prixbase = 42.99;
    
    printf("L'article coute $%.2f\n", prixbase);
    remiser(&prixbase);
    printf("Après remise, cela donne $%.2f\n", prixbase);
    return(0);
}

void remiser(float *a)
{
    *a = *a * 0.90;
}
