//
//  main.c
//  ex1910
//
//  Created by Alexis Abda on 17/12/2021.
//

#include <stdio.h>

int main()
{
    char alpha = 'A';
    int x;
    char *pa;
    
    pa = &alpha;
    
    for (x=0; x<26; x++)
        putchar((*pa)++);
    putchar('\n');
    return 0;
}
