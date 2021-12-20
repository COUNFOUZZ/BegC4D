//
//  main.c
//  ex1305
//
//  Created by Alexis Abda on 27/11/2021.
//

#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;
    
    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);
    reponse = toupper(reponse);
    
    if (reponse == 'O')
        puts("BOOM !");
    else if (reponse == 'N')
        puts("La lune ne craint rien.");
    else
        puts("Aucune décision peut être fatal");
    
    return 0;
}
