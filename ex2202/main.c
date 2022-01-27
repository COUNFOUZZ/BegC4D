//
//  main.c
//  ex2202
//
//  Created by Alexis Abda on 27/01/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fh;
    int ch;

    fh = fopen("hello.txt", "r"); //  Mode lecture
    if(fh == NULL)
    {
        puts("Ouverture du fichier impossible !");
        exit(1);
    }
    while((ch = fgetc(fh)) != EOF)
        putchar(ch);
    fclose(fh);

    return(0);
}
