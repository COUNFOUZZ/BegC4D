//
//  main.c
//  ex1118
//
//  Created by Alexis Abda on 18/11/2021.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, a, b;
    
    puts("100 chiffres au hasard entre 0 et 20");
    for (a=0; a<20; a++)
    {
        for (b=0; b<5; b++)
        {
            r = rand();
            r%=21;
            printf("%d\t", r);
        }
        putchar('\n');
    }
    return 0;
}
