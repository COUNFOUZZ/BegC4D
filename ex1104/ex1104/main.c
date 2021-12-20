//
//  main.c
//  ex1104
//
//  Created by Alexis Abda on 17/11/2021.
//

#include <stdio.h>

int main()
{
    int x;
    
    x = -10;
    while (x < 10)
    {
        printf("%d ", x);
        x++;
    }
    while (x >= -10)
    {
        printf("%d ", x);
        x--;
    }
    putchar('\n');
    return 0;
}
