//
//  ex2308.c
//  ex2308
//
//  Created by Alexis Abda on 30/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ficorig, *ficopie;
    int c;

    ficorig = fopen("ex2308.c", "r");
    ficopie = fopen("ex2308.bak", "w");
    if(!ficorig || !ficorig)
    {
        puts("Erreur fichier !");
        exit(1);
    }
    while((c = fgetc(ficorig)) != EOF)
        fputc(c, ficopie);
    puts("Copie de fichier faite");

    return(0);
}
