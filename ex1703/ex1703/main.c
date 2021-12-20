//
//  main.c
//  ex1703
//
//  Created by Alexis Abda on 06/12/2021.
//

#include <stdio.h>
#define SET 32

char *binbin(int n);

int main()
{
    int bor, resultat;
    
    printf("Indiquez une valeur entre 0 et 255 : ");
    scanf("%d", &bor);
    resultat = bor | SET;
    
    printf("\t%s\t%d\n", binbin(bor), bor);
    printf("|\t%s\t%d\n", binbin(SET), SET);
    printf("=\t%s\t%d\n", binbin(resultat), resultat);
    return(0);
}

char *binbin(int n)
{
    static char bin[9];
    int x;
    
    for (x=0; x<8; x++)
    {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}
