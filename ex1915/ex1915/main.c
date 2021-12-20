//
//  main.c
//  ex1915
//
//  Created by Alexis Abda on 18/12/2021.
//

#include <stdio.h>

int main()
{
    char *sample = "D'ou me viendra le secours?\n";
    
    while (putchar(*sample++));
    return 0;
}
