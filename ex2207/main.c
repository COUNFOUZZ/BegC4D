//
//  main.c
//  ex2207
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
    fwrite(&scoremax, sizeof(int), 1, handle);
    fclose(handle);
    puts("Le score à été enregistré.");

    return(0);
}
