//
//  main.c
//  ex1103
//
//  Created by Alexis Abda on 17/11/2021.
//

#include <stdio.h>

int main()
{
    int x;
    
    for (x = -5; x < 5; x++)
        printf("%d ", x);
    for (; x >= -5; x--)
        printf("%d ", x);
    putchar('\n');
    
    return 0;
}
