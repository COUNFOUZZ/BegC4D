//
//  main.c
//  ex2206
//
//  Created by Alexis Abda on 27/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int scoremax;

    handle = fopen("scores.dat", "w");
    if(!handle)
    {
        puts("Erreur fichier !");
        exit(1);
    }
    printf("Indiquez votre meilleur score : ");
    scanf("%d", &scoremax);
    fprintf(handle, "%d", scoremax);
    fclose(handle);
    puts("Le score à été enregistré.");

    return(0);
}
