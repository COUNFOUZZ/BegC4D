//
//  main.c
//  ex0717
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

int main()
{
    const int size = 3;
    char personne[size];
    
    printf("Qui êtes-vous? ");
    fgets(personne, size, stdin);
    printf("Heureux de vous rencontrer, %s.\n", personne);
    return 0;
}
