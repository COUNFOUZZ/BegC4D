//
//  main.c
//  ex1812
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    int a;
    int *p;
    
    a = 10;
    p = &a;
    
    printf("%d\n", *p);
    return 0;
}
