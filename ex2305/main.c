//
//  main.c
//  ex2305
//
//  Created by Alexis Abda on 30/01/2022.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    char dosscour[255];

    getcwd(dosscour, 255);
    printf("Dossier courant : %s\n", dosscour);
    mkdir("ultra_tempo", 755);
    puts("Dossier fait.");
    chdir("ultra_tempo");
    getcwd(dosscour, 255);
    printf("Dossier courant : %s\n", dosscour);

    return(0);
}
