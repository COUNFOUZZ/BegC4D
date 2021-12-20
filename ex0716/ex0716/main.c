//
//  main.c
//  ex0716
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

int main()
{
    char personne[10];
    
    printf("Qui êtes-vous? ");
    fgets(personne, 10, stdin);
    printf("Heureux de vous rencontrer, %s.\n", personne);
    return 0;
}
