//
//  main.c
//  ex1112
//
//  Created by Alexis Abda on 18/11/2021.
//

#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    
    for (x=0.0; x<10.0; x++)
    {
        printf("2^%.0f = %.2f\n", x, pow(2.0, x));
    }
    return 0;
}
