//
//  main.c
//  ex1706
//
//  Created by Alexis Abda on 06/12/2021.
//

#include <stdio.h>

int main()
{
    char input[64];
    int ch;
    int x = 0;
    
    printf("Saisissez du texte : ");
    fgets(input, 63, stdin);
    
    while (input[x] != '\0')
    {
        ch = input[x] & 223;
        putchar(ch);
        x++;
    }
    putchar('\n');
    
    return(0);
}
