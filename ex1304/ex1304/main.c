//
//  main.c
//  ex1304
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
    else
        puts("La lune ne craint rien.");
    
    return 0;
}
