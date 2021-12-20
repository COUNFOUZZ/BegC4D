//
//  main.c
//  ex1409
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>
#include <string.h>

int main()
{
    struct date
    {
        int sjour;
        int smois;
        int sannee;
    };
    struct id
    {
        char prenom[20];
        char nom[20];
    };
    struct humain
    {
        struct id hnom;
        struct date hdatenaiss;
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
