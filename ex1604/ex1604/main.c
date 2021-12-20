//
//  main.c
//  ex1604
//
//  Created by Alexis Abda on 01/12/2021.
//

#include <stdio.h>
#include <string.h>


int main()
{
    typedef struct id
    {
        char prenom[20];
        char nom[20];
    } personne;
    typedef struct date
    {
        int sjour;
        int smois;
        int sannee;
    } calendrier;
    struct humain
    {
        personne hnom;
        calendrier hdatenaiss;
    };
    
    struct humain president;
    
    strcpy(president.hnom.nom, "Washington");
    strcpy(president.hnom.prenom, "George");
    president.hdatenaiss.sjour = 22;
    president.hdatenaiss.smois = 2;
    president.hdatenaiss.sannee = 1732;
    
    printf("Naissance de %s %s le %d/%d/%d\n",\
           president.hnom.prenom,\
           president.hnom.nom,\
           president.hdatenaiss.sjour,\
           president.hdatenaiss.smois,\
           president.hdatenaiss.sannee);

    
    return 0;
}
