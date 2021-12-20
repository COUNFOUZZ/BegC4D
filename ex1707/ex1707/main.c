//
//  main.c
//  ex1707
//
//  Created by Alexis Abda on 06/12/2021.
//

#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[64];
    int ch;
    int x = 0;
    
    printf("Saisissez du texte : ");
    fgets(input, 63, stdin);
    
    while (input[x] != '\0')
    {
        ch = input[x];
        if(isalpha(ch))
            ch &= 223;
        putchar(ch);
        x++;
    }
    putchar('\n');
    
    return(0);
}

//  Ligne 23 peut être remplacé sans utiliser la librairie ctype -> if( ch>='a' && ch<='z' )
