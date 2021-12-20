//
//  main.c
//  ex1913
//
//  Created by Alexis Abda on 18/12/2021.
//

#include <stdio.h>

int main()
{
    char sample[] = "D'ou me viendra le secours?\n";
    char *p = sample;
   
    while (*p)  // = while (*p != '\0') c'est la même notation.
        putchar(*p++);
    
    return 0;
}
