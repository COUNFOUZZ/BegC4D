//
//  main.c
//  ex0820
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char choixMenu;
    
    puts("Nos formules du jour :");
    puts("A - Petit déjeuner, midi et soir");
    puts("B - Demi-pension matin et soir");
    puts("C - Repas du soir seul");
    printf("Votre choix : ");
    scanf("%c", &choixMenu);
    
    printf("Vous avez choisi ");
    switch (choixMenu)
    {
        case 'A':
        case 'a':
            printf("Repas du midi, ");
        case 'B':
        case 'b':
            printf("Petit déjeuner, ");
        case 'C':
        case 'c':
            printf("Repas du soir ");
            
        default:
            printf("comme formule de restauration.\n");
            break;
    }
    return 0;
}
