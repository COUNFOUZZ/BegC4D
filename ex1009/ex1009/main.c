//
//  main.c
//  ex1009
//
//  Created by Alexis Abda on 16/11/2021.
//

#include <stdio.h>

float convertir(float f);

int main()
{
    float temp_f, temp_c;
    
    printf("Temperature en Fahrenheit: ");
    scanf("%f", &temp_f);
    temp_c = convertir(temp_f);
    printf("%.1fF vaut %.1fC\n", temp_f, temp_c);
    return 0;
}

float convertir(float f)
{
    int t;
    
    t = (f - 32) / 1.8;
    return (t);
}
