//
//  main.c
//  ex1810
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    char lead;
    char *sidekick;
    
    lead = 'A';
    sidekick = &lead;
    
    printf("Pour la variable 'lead' :\n");
    printf("Taille\t\t%ld\n", sizeof(lead));
    printf("Contenu\t\t%c\n", lead);
    printf("Adresse\t\t%p\n", &lead);
    printf("Pour la variable 'sidekick' :\n");
    printf("Contenu\t\t%p\n", sidekick);
    printf("Valeur indirecte\t%c\n", *sidekick);
    return 0;
}
