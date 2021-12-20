//
//  main.c
//  ex1317
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

int main()
{
    char i;
    
    do
    {
        i = getchar();
        putchar(i);
    }
    while (i != '.');
    
    putchar('\n');
    return 0;
}
