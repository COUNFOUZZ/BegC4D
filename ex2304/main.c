//
//  main.c
//  ex2304
//
//  Created by Alexis Abda on 30/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
    DIR *nomdoss;
    struct dirent *file;
    struct stat statisfic;

    nomdoss = opendir(".");
    if(nomdoss == NULL)
    {
        puts("Lecture du dossier impossible");
        exit(1);
    }
    while((file = readdir(nomdoss)))
    {
        stat(file->d_name, &statisfic);

        if(S_ISDIR(statisfic.st_mode))
        {
            printf("%s\t%s\t%s", \
        file->d_name,
        "<DIR>",
        ctime(&statisfic.st_mtime));
        }
        else
        {
        printf("%s\t%ld\t%s", \
        file->d_name,
        (long)statisfic.st_size,
        ctime(&statisfic.st_mtime));
        }
    }
    closedir(nomdoss);

    return(0);
}
