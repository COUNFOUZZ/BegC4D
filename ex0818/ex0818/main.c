//
//  main.c
//  ex0818
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char code;
    
    printf("Indiquez le code erreur (A, B ou C) : ");
    scanf("%c", &code);
    
    switch (code)
    {
        case 'A':
            puts("Erreur disque, vous n'y pouvez rien.");
            break;
        case 'B':
            puts("Format invalide, appelez votre avocat.");
            break;
        case 'C':
            puts("Nom de fichier incorrect, spank it.");
            break;
            
        default:
            puts("Haha, ni A, ni B, ni C ?");
            break;
    }
    return 0;
}
