//
//  main.c
//  ex1920
//
//  Created by Alexis Abda on 23/12/2021.
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
    {
        while (putchar(*(*(fruits+x))++));
        putchar('\n');
    }
    return 0;
}
