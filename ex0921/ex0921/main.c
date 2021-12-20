//
//  main.c
//  ex0921
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int x;
    
    for (x = 0; x < 10; x = x + 1, printf("%d\n", x))
        ;
    return 0;
}
