//
//  main.c
//  ex0821
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int a, b, lePlusGrand;
    
    printf("Indiquez une valeur A: ");
    scanf("%d", &a);
    printf("Indiquez une valeur B: ");
    scanf("%d", &b);
    
    lePlusGrand = (a > b) ? a : b;
    printf("La valeur %d est plus grande.\n", lePlusGrand);
    return 0;
}
