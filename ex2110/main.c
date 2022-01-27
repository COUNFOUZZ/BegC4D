//
//  main.c
//  ex2110
//
//  Created by Alexis Abda on 26/01/2022.
//

#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *present;
    char *jourDeLaSemaine[] = { 
        "Dimanche",
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi"
    };

    time(&tictoc);
    present = localtime(&tictoc);
    printf("A présent, nous sommes %s %d/%d/%d\n", \
        jourDeLaSemaine[present->tm_wday],
        present->tm_mday,
        present->tm_mon+1,
        present->tm_year+1900);

    return(0);
}