//
//  main.c
//  ex0817
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int code;
    
    printf("Indiquez le code erreur (1-3) : ");
    scanf("%d", &code);
    
    switch (code)
    {
        case 1:
            puts("Erreur disque, vous n'y pouvez rien.");
            break;
        case 2:
            puts("Format invalide, appelez votre avocat.");
            break;
        case 3:
            puts("Nom de fichier incorrect, spank it.");
            break;
            
        default:
            puts("Haha, ni 1, ni 2, ni 3 ?");
            break;
    }
    return 0;
}
