//
//  main.c
//  ex2004
//
//  Created by Alexis Abda on 16/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{; 
    char *entrante;

    entrante = (char *)malloc(sizeof(char)*1024);
    if(entrante == NULL)
    {
        puts("Allocation impossible ! Banzai !");
        exit(1);
    }

    puts("Saisissez quelque chose d'un peu long :");
    fgets(entrante, 1023, stdin);
    puts("Vous avez saisi :");
    printf("\"%s\"\n", entrante);

    return(0);
}
