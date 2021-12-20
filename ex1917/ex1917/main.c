//
//  main.c
//  ex1917
//
//  Created by Alexis Abda on 18/12/2021.
//

#include <stdio.h>

int main()
{
    char *fruits[] = {
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"
    };
    int x;
    
    for (x=0; x<7; x++)
        puts(fruits[x]);
    return 0;
}
