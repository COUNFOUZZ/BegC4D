//
//  main.c
//  ex0905
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int duo;
    
    for (duo = 2; duo <= 100; duo = duo + 2)
    {
        printf("%d\t", duo);
    }
    putchar('\n');
    return 0;
}
