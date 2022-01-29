//
//  main.c
//  ex2211
//
//  Created by Alexis Abda on 29/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char nomfic[255];
    FILE *dumpme;
    int x, c;

    if(argc < 2)
    {
        printf("Nom du fichier : ");
        scanf("%s", nomfic);
    }
    else
    {
        strcpy(nomfic, argv[1]);
    }
    dumpme = fopen(nomfic, "r");
    if(!dumpme)
    {
        printf("Ouverture impossible de '%s'\n", nomfic);
        exit(1);
    }
    x=0;
    while((c=fgetc(dumpme)) != EOF)
    {
        printf("%02X ", c);
        x++;
        if(!(x % 16))
            putchar('\n');
    }
    putchar('\n');
    fclose(dumpme);

    return(0);
}
