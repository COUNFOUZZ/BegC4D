//
//  main.c
//  ex2201
//
//  Created by Alexis Abda on 27/01/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fh;

    fh = fopen("hello.txt", "w"); //  Mode écriture
    if(fh == NULL)
    {
        puts("Ouverture du fichier impossible !");
        exit(1);
    }

    fprintf(fh, "Je laisse une trace.\n");
    fclose(fh);

    return(0);
}
