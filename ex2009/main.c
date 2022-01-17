//
//  main.c
//  ex2009
//
//  Created by Alexis Abda on 17/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct actions {
        char    symbole[5];
        int     quantite;
        float   cours;
    };
    struct actions *invest;

    //  Création de la structure en mémoire
    invest = (struct actions *)malloc(sizeof(struct actions));
    if(invest == NULL)
    {
        puts("Erreur malloc()");
        exit(1);
    }

    //  Affectation des valeurs
    strcpy(invest->symbole, "GOOG");
    invest->quantite = 100;
    invest->cours = 801.19;

    //  Affichage
    puts("Portefeuille d'actions");
    printf("Symbole\tQte\tCours\tValeur\n");
    printf("%s\t%d\t%.2f\t%.2f\n", invest->symbole, invest->quantite, invest->cours, invest->quantite*invest->cours);

    return(0);
}