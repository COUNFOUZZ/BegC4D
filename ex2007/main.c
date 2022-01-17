//
//  main.c
//  ex2007
//
//  Created by Alexis Abda on 17/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *entrante;
    int longue;

    entrante = (char *)malloc(sizeof(char)*1024);
    if(entrante == NULL)
    {
        puts("Allocation impossible !");
        exit(1);
    }
    puts("Saisissez du texte :");
    fgets(entrante, 1023, stdin);
    longue = strlen(entrante);

    /*
        Même résultat que la ligne 38 à 42 mais plus lisible

    entrante = realloc(entrante, sizeof(char)*(longue+1));
    if(entrante == NULL)
    {
        puts("Nouvelle allocation impossible !");
        exit(1);
    }
    */

    if(realloc(entrante, sizeof(char)*(longue+1)) == NULL)
    {
        puts("Nouvelle allocation impossible !");
        exit(1);
    }
    puts("Reallocation correcte.");
    puts("Vous avez saisi :");
    printf("\"%s\"\n", entrante);

    return(0);
}