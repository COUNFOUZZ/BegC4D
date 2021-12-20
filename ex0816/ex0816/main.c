//
//  main.c
//  ex0816
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char ouiNon;
    
    printf("Veuillez répondre par OUI ou par NON (Y,y/N,n) : ");
    scanf("%c", &ouiNon);
    if (ouiNon == 'Y' || ouiNon == 'y')
    {
        puts("Vous avez répondu oui !");
    }
    else if (ouiNon == 'N' || ouiNon == 'n')
    {
        puts("Vous avez répondu non !");
    }
    else
    {
        puts("Veuillez entrer une lettre valide (Y,y/N,n) !");
    }
    return 0;
}
