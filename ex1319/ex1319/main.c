//
//  main.c
//  ex1319
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

char getcha(void);
int main()
{
    char primo, secundo;
    
    printf("Initiale de votre prénom : ");
    primo = getcha();
    printf("Initiale de votre nom de famille : ");
    secundo = getcha();
    printf("Vos initiales sont '%c' et '%c'\n", primo, secundo);
    return 0;
}

char getcha(void)
{
    char ch;
    
    ch = getchar();
    while (getchar() != '\n')
        ;
    return(ch);
}
