//
//  main.c
//  ex0915
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    float x;
    
    x = -5.0;
    while (x < 5.0)
    {
        printf("%.1f\n", x);
        x = x + 0.5;
    }
    return 0;
}
