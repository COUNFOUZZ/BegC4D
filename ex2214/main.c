//
//  main.c
//  ex2214
//
//  Created by Alexis Abda on 30/01/2022.
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

    a007 = fopen("bond.db", "r");
    if(!a007)
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    while(fread(&bond, sizeof(struct filmo), 1, a007))
        printf("%s\t%d\t%s\n", \
            bond.acteur,
            bond.annee,
            bond.titre);
    fclose(a007);

    return(0);
}
