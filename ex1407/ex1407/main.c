//
//  main.c
//  ex1407
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

int main()
{
    struct scores
    {
        char nomj[32];
        int score;
    };
    struct scores joueurs[4];
    struct scores tmp;
    int x, i;
    
    for (x=0; x<4; x++)
    {
        printf("Indiquez le joueur %d : ", x+1);
        scanf("%s", joueurs[x].nomj);
        printf("Indiquez le score du joueur %d : ", x+1);
        scanf("%d", &joueurs[x].score);
    }
    
    for (x=0; x<3; x++) {
        
        for (i=x+1; i<4; i++)
        {
            if (joueurs[x].score < joueurs[i].score)
            {
                tmp = joueurs[x];
                joueurs[x] = joueurs[i];
                joueurs[i] = tmp;
            }
        }
    }
    
    puts("Infos de joueur");
    printf("#\tNom\tScore\n");
    for (x=0; x<4; x++)
        printf("%d\t%s\t%5d\n", x+1, joueurs[x].nomj, joueurs[x].score);

    return 0;
}
