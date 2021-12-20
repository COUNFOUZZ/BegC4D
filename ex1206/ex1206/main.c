//
//  main.c
//  ex1206
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>

int main()
{
    float tabBourseFin[5];
    int x;
    
    for (x=0; x<5; x++)
    {
        printf("Jour %d: ", x+1);
        scanf("%f", &tabBourseFin[x]);
    }
    
    puts("Fermeture bourse");
    for (x=0; x<5; x++)
    {
        printf("Jour %d: %.2f\n", x+1, tabBourseFin[x]);
    }
    return 0;
}
