//
//  main.c
//  ex1926
//
//  Created by Alexis Abda on 14/01/2022.
//

#include <stdio.h>

char *strinverser(char *entrante);

int main()
{
    char machaine[64];
    
    printf("Saississez du texte : ");
    fgets(machaine, 62, stdin);
    puts(strinverser(machaine));
    
    return(0);
}

char *strinverser(char *entrante)
{
    static char sortante[64];
    char *i, *o;
    
    i = entrante; o = sortante;
    
    while (*i++ != '\n');
    i--;
    
    while (i >= entrante)
        *o++ = *i--;
    *o = '\0';
    
    return(sortante);
}
