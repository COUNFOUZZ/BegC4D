//
//  main.c
//  ex1203
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>

int main()
{
    int scoremax[4];
    
    printf("Votre meilleur score: ");
    scanf("%d", &scoremax[0]);
    printf("Second meilleur score: ");
    scanf("%d", &scoremax[1]);
    printf("Troisieme meilleur score: ");
    scanf("%d", &scoremax[2]);
    printf("Quatrieme meilleur score: ");
    scanf("%d", &scoremax[3]);
    
    puts("Voici vos meilleurs scores");
    printf("#1 %d\n", scoremax[0]);
    printf("#2 %d\n", scoremax[1]);
    printf("#3 %d\n", scoremax[2]);
    printf("#4 %d\n", scoremax[3]);
    
    return 0;
}
