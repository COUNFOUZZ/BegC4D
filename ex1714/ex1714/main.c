//
//  main.c
//  ex1714
//
//  Created by Alexis Abda on 08/12/2021.
//

#include <stdio.h>

char *binbin(int n);

int main()
{
    int b, x;
    
    b = 0x11;
    
    for (x=0; x<8; x++)
    {
        printf("%s 0x%04X %4d\n", binbin(b), b, b);
        b<<=1;
    }
    return 0;
}

char *binbin(int n)
{
    static char bin[17];
    int x;
    
    for (x=0; x<16; x++)
    {
        bin[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}
