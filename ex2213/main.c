//
//  main.c
//  ex2213
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
    struct filmo bond2;
    struct filmo bond3;
    FILE *a007;

    a007 = fopen("bond.db", "a");
    if(!a007)
    {
        puts("SPECTRE gagne !");
        exit(1);
    }

    strcpy(bond2.acteur, "Roger Moore");
    bond2.annee = 1973;
    strcpy(bond2.titre, "Live and Let Die");
    fwrite(&bond2, sizeof(struct filmo), 1, a007);

    strcpy(bond3.acteur, "Pierce Brosnan");
    bond3.annee = 1995;
    strcpy(bond3.titre, "GoldenEye");
    fwrite(&bond3, sizeof(struct filmo), 1, a007);

    fclose(a007);
    puts("Enregistrement écrit");

    return(0);
}
