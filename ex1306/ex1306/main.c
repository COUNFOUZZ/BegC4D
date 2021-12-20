//
//  main.c
//  ex1306
//
//  Created by Alexis Abda on 27/11/2021.
//

#include <stdio.h>
#include <ctype.h>

int main()
{
    char texte[] = "Forcer les MAJUSCULES en minuscules et les minuscules en MAJUSCULES.";
    int index;
    char c;
    
    puts("Texte de base :");
    printf("%s\n", texte);
    putchar('\n');
    
    index = 0;
    while (texte[index])
    {
        c = texte[index];
        if (islower(c))
            texte[index] = toupper(c);
        else if (isupper(c))
            texte[index] = tolower(c);
        else
            texte[index] = c;
        index++;
    }
    
    puts("Texte modifié :");
    printf("%s\n", texte);

    
    return 0;
}

