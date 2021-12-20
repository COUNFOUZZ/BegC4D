//
//  main.c
//  ex0910
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char alphabet;
    
    for (alphabet = 'z'; alphabet >= 'a'; alphabet = alphabet - 1)
    {
        printf("%c", alphabet);
    }
    putchar('\n');
    return 0;
}
