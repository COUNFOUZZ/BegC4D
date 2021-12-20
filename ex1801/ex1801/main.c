//
//  main.c
//  ex1801
//
//  Created by Alexis Abda on 08/12/2021.
//

#include <stdio.h>

int main()
{
    char    c = 'c';
    int     i = 123;
    float   f = 98.6;
    double  d = 6.022E23;
    
    printf("char\t%u\n",    sizeof(c));
    printf("int\t\t%u\n",   sizeof(i));
    printf("float\t%u\n",   sizeof(f));
    printf("double\t%u\n",  sizeof(d));
    return 0;
}
