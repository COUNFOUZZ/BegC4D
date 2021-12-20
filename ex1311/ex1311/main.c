//
//  main.c
//  ex1311
//
//  Created by Alexis Abda on 27/11/2021.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char primo[40];
    char secundo[20];
    
    printf("Indiquez votre prénom : ");
    scanf("%s", primo);
    printf("Indiquez votre nom de famille : ");
    scanf("%s", secundo);
    
    strcat(primo, " ");
    strcat(primo, secundo);
    printf("Ravi de vous voir, %s!\n", primo);
    return 0;
}
