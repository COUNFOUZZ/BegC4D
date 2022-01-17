//
//  main.c
//  ex2010
//
//  Created by Alexis Abda on 17/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct actions {
        char symbole[5];
        int quantite;
        float cours;
        struct actions *asuiv;
    };

    struct actions *aprems;
    struct actions *acour;
    struct actions *anouv;

    //  Creation structure
    aprems = (struct actions *)malloc(sizeof(struct actions));
    if(aprems == NULL)
    {
        puts("Erreur malloc()");
        exit(1);
    }
    
    //  Remplissage
    acour = aprems;
    strcpy(acour->symbole, "GOOG");
    acour->quantite = 100;
    acour->cours = 801.19;
    acour->asuiv = NULL;

    anouv = (struct actions *)malloc(sizeof(struct actions));
    if(anouv == NULL)
    {
        puts("Autre erreur malloc()");
        exit(1);
    }
    acour->asuiv = anouv;
    acour = anouv;
    strcpy(acour->symbole, "MSFT");
    acour->quantite = 100;
    acour->cours = 28.77;
    acour->asuiv = NULL;

    //  Affichage
    puts("Portefeuille");
    printf("Symbole\tQte\tCours\tValeur\n");
    acour = aprems;
    printf("%s\t%d\t%.2f\t%.2f\n", acour->symbole, acour->quantite, acour->cours, acour->quantite*acour->cours);
    acour = acour->asuiv;
    printf("%s\t%d\t%.2f\t%.2f\n", acour->symbole, acour->quantite, acour->cours, acour->quantite*acour->cours);

    return(0);
}
