//
//  main.c
//  ex1811
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    char a,b,c;
    char *p;
    
    a = 'A'; b = 'B'; c = 'C';
    
    printf("Apprenez votre ");
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    printf("s\n");
    return 0;
}
