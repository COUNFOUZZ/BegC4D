//
//  main.c
//  ex1805
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    struct robot {
        int alive;
        char name[5];
        int xpos;
        int ypos;
        int strength;
    };
    
    printf("Taille de la structure robot : %u\n", sizeof(struct robot));
    return 0;
}
