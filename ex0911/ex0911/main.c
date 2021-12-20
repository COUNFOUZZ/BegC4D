//
//  main.c
//  ex0911
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char alpha, code;
    
    for (alpha = 'A'; alpha <= 'G'; alpha = alpha + 1)
    {
        for (code = 1; code <= 7; code = code + 1)
        {
            printf("%c%d\t", alpha, code);
        }
        putchar('\n');
    }
    return 0;
}
