//
//  main.c
//  ex2208
//
//  Created by Alexis Abda on 27/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int scoremax[5];
    int x;

    handle = fopen("scores.dat", "w");
    if(!handle)
    {
        puts("Erreur fichier !");
        exit(1);
    }
    puts("Indiquez votre meilleur score");
    for(x=0;x<5;x++)
    {
        printf("Score #%d : ", x+1);
        scanf("%d", scoremax);
    }

    fwrite(&scoremax, sizeof(int), 5, handle);
    fclose(handle);
    puts("Le score à été enregistré.");

    return(0);
}
