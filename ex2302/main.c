//
//  main.c
//  ex2302
//
//  Created by Alexis Abda on 30/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
    DIR *nomdoss;
    struct dirent *file;

    nomdoss = opendir(".");
    if(nomdoss == NULL)
    {
        puts("Lecture du dossier impossible");
        exit(1);
    }
    while((file = readdir(nomdoss)) != NULL)
        printf("Nom du fichier ou dossier '%s'\n", file->d_name);
    closedir(nomdoss);

    return(0);
}
