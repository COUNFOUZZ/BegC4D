//
//  main.c
//  ex2306
//
//  Created by Alexis Abda on 30/01/2022.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>

int main()
{
    char *dir_name = "ultra_tempo";
    char dosscour[255];
    DIR *dossier;

    dossier = opendir(dir_name);

    if(dossier == NULL)
    {
        mkdir(dir_name, 0755);
        puts("Dossier fait.");
    }
    getcwd(dosscour, 255);
    printf("Dossier courant : %s\n", dosscour);
    mkdir(dir_name, 0755);
    if(chdir(dir_name) == 0)
        getcwd(dosscour, 255);
    else
        printf("Le dossier que vous essayez d'acceder n'est pas disponible.\n");
        
    printf("Dossier courant : %s\n", dosscour);

    return(0);
}
