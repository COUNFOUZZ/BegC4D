//
//  main.c
//  ex2006
//
//  Created by Alexis Abda on 16/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{; 
    char *entrante, *sortante, *i, *o;

    entrante = (char *)malloc(sizeof(char)*1024);
    sortante = (char *)malloc(sizeof(char)*1024);
    if(entrante == NULL || sortante == NULL)
    {
        puts("Allocation impossible ! Banzai !");
        exit(1);
    }

    puts("Saisissez quelque chose d'un peu long :");
    fgets(entrante, 1023, stdin);

    i = entrante;
    o = sortante;

    while(*i != '\n')
    {
        if(*i == 'a' || *i == 'e' || *i == 'i' || *i == 'o' || *i == 'u' || *i == 'y')
            *o = '@';
        else
            *o = *i;
            
        o++;
        i++;
    }
    *o = '\0';

    puts("Vous avez saisi :");
    printf("\"%s\"\n", sortante);

    return(0);
}
