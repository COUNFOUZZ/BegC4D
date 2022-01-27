//
//  main.c
//  ex2205
//
//  Created by Alexis Abda on 27/01/2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;

    fh = fopen("hello.txt", "a");   // Mode ajout
    if(fh == NULL)
    {
        puts("Ouverture du fichier impossible !");
        exit(1);
    }
    fprintf(fh, "Texte apparu plus tard\n");
    fclose(fh);

    return(0);
}
