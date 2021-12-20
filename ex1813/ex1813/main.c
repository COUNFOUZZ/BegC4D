//
//  main.c
//  ex1813
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    char a,b,c;
    char *p;
    
    p = &a;
    *p = 'A';
    p = &b;
    *p = 'B';
    p = &c;
    *p = 'C';
    printf("Apprenez votre %c%c%cs\n", a, b, c);
    return 0;
}
