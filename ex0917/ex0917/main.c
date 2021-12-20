//
//  main.c
//  ex0917
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int x;
    
    x = 13;
    do
    {
        puts("Le saviez-vous ?");
        x = x + 1;
    } while (x < 10);
    return 0;
}
