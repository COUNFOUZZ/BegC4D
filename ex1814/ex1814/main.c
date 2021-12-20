//
//  main.c
//  ex1814
//
//  Created by Alexis Abda on 11/12/2021.
//

#include <stdio.h>

int main()
{
    int i;
    float f;
    int *pi;
    float *pf;
    
    pi = &i;
    *pi = 100;
    pf = &f;
    *pf = 23.45;
    
    printf("int i = %d\tfloat f = %f\n", i, f);
    return(0);
}
