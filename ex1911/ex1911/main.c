//
//  main.c
//  ex1911
//
//  Created by Alexis Abda on 18/12/2021.
//

#include <stdio.h>

int main()
{
    float temps[5] = { 58.7, 62.8, 65.0, 63.3, 63.2 };
    float *ptemps = temps;
    
    printf("Mardi, il fera %.1f\n", temps[1]);
    printf("Vendredi, il fera %.1f\n", temps[4]);
    putchar('\n');
    puts("Affichage avec les pointeurs");
    printf("Mardi, il fera %.1f\n", *(ptemps+1));
    printf("Vendredi, il fera %.1f\n", *(ptemps+4));
    return 0;
}
