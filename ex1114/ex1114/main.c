//
//  main.c
//  ex1114
//
//  Created by Alexis Abda on 18/11/2021.
//

#include <stdio.h>

int main()
{
    float degres, radians;
    
    printf("Indiquez le radiant : ");
    scanf("%f", &radians);
    degres = 57.2957795*radians;
    printf("%.2f radiant valent %.2f degres.\n", radians, degres);
    return 0;
}
