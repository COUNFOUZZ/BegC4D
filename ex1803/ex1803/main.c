//
//  main.c
//  ex1803
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Suis-je trop longue pour vous ?";
    
    printf("La chaine \"%s\" mesure %u.\n", string, sizeof(string));
    printf("Fonction strlen() %lu\n", strlen(string));
    
    return 0;
}
