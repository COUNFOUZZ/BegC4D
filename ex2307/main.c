//
//  main.c
//  ex2307
//
//  Created by Alexis Abda on 30/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *test;

    test = fopen("blorfus", "w");
    if(!test)
    {
        puts("Création du fichier impossible !");
        exit(1);
    }
    fclose(test);
    if(rename("blorfus", "wambooli") == -1)
    {
        puts("impossible de renommer");
        exit(1);
    }
    puts("Nom du fichier modifié");

    return(0);
}
