//
//  main.c
//  ex1710
//
//  Created by Alexis Abda on 07/12/2021.
//

#include <stdio.h>

char *binbin(int n);

int main()
{
    int decalbin, x;
    
    printf("Indiquez une valeur entre 0 et 255 : ");
    scanf("%d", &decalbin);
    
    for (x=0; x<8; x++)
    {
        printf("%s\n", binbin(decalbin));
        decalbin = decalbin << 1;
    }
    return 0;
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
