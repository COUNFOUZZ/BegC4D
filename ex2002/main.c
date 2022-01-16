//
//  main.c
//  ex2002
//
//  Created by Alexis Abda on 16/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float *temperature;
    char c;

    temperature = (float *)malloc(sizeof(float)*1);
    if(temperature == NULL)
    {
        puts("Allocation mémoire impossible");
        exit(0);
    }

    printf("Quel est la température : ");
    scanf("%f", temperature);
    puts("La valeur est en (C)elsius ou en (F)ahrenheit ?");
    while(c != 'c' && c != 'C' && c != 'f' && c != 'F')
    {
        getchar();
        c = toupper(getchar());
        puts("Veuillez choisir entre (c) pour Celsius ou (f) pour Fahrenheit : ");
    }

    if(c == 'C')
        printf("%.2f°C = %.2f° en Kelvin\n", *temperature, *temperature+273.15);
    else
        printf("%.2f°F = %.2f° en Kelvin\n", *temperature, (*temperature+459.67)*(5.0/9.0));

    return(0);
}
