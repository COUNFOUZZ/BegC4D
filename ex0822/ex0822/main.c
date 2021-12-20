//
//  main.c
//  ex0822
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Indiquez une valeur A: ");
    scanf("%d", &a);
    printf("Indiquez une valeur B: ");
    scanf("%d", &b);
    
    if (a > b)
    {
        printf("La valeur %d est plus grande.\n", a);
    }
    else
    {
        printf("La valeur %d est plus grande.\n", b);
    }
    return 0;
}
