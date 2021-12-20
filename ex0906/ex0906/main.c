//
//  main.c
//  ex0906
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int three;
    
    for (three = 3; three <= 100; three = three + 3)
    {
        printf("%d\t", three);
    }
    putchar('\n');
    return 0;
}
