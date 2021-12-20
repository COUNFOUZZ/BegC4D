//
//  main.c
//  ex0908
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char alphabet;
    
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet = alphabet + 1)
    {
        printf("%c", alphabet);
    }
    putchar('\n');
    return 0;
}
