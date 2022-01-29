//
//  main.c
//  ex2212
//
//  Created by Alexis Abda on 29/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct filmo{
        char acteur[32];
        int annee;
        char titre[32];
    };
    struct filmo bond;
    FILE *a007;
    strcpy(bond.acteur, "Sean Connery");
    bond.annee = 1962;
    strcpy(bond.titre, "Dr. No");
    a007 = fopen("bond.db", "w");
    if(!a007)
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    fwrite(&bond, sizeof(struct filmo), 1, a007);
    fclose(a007);
    puts("Enregistrement écrit");

    return(0);
}
