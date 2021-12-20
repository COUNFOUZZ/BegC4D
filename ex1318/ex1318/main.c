//
//  main.c
//  ex1318
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

int main()
{
    char primo, secundo;
    
    printf("Initiale de votre prénom : ");
    primo = getchar();
    printf("Initiale de votre nom de famille : ");
    secundo = getchar();
    printf("Vos initiales sont '%c' et '%c'\n", primo, secundo);
    return 0;
}
