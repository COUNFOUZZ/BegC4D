//
//  main.c
//  ex0909
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char alphabet;
    
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet = alphabet + 1)
    {
        printf("%d", alphabet);
    }
    putchar('\n');
    return 0;
}
