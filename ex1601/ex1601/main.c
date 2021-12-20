//
//  main.c
//  ex1601
//
//  Created by Alexis Abda on 01/12/2021.
//

#include <stdio.h>

int main()
{
    int a, b;
    float c;
    
    printf("Premier entier : ");
    scanf("%d", &a);
    printf("Deuxième entier : ");
    scanf("%d", &b);
    c = a/b;
    printf("%d/%d = %.2f\n", a, b, c);
    return 0;
}
