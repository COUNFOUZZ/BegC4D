//
//  main.c
//  ex1402
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

int main()
{
    struct joueur
    {
        char nomj[32];
        int scoremax;
        float heurejeu;
    };
    struct joueur xbox;
    
    printf("Nom du joueur : ");
    scanf("%s", xbox.nomj);
    printf("Meilleur score : ");
    scanf("%d", &xbox.scoremax);
    printf("Temps de jeu : ");
    scanf("%f", &xbox.heurejeu);
    
    printf("Meilleur score de %s : %d\t Temps de jeu : %.2f\n", xbox.nomj, xbox.scoremax, xbox.heurejeu);
    return 0;
}
