//
//  main.c
//  ex1606
//
//  Created by Alexis Abda on 01/12/2021.
//

#include <stdio.h>

void procedure(void);

int main()
{
    puts("Premier appel");
    procedure();
    puts("Second appel");
    procedure();
    return 0;
}

void procedure(void)
{
    static int a;
    
    printf("La valeur de la variable a est %d\n", a);
    printf("Indiquez une autre valeur : ");
    scanf("%d", &a);
}
