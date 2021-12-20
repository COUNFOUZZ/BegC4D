//
//  main.c
//  ex1914
//
//  Created by Alexis Abda on 18/12/2021.
//

#include <stdio.h>

int main()
{
    char sample[] = "D'ou me viendra le secours?\n";
    char *p = sample;
   
    while (putchar(*p++));
    
    return 0;
}
