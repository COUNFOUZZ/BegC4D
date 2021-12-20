//
//  main.c
//  ex0912
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    char lettre1, lettre2, lettre3;
    
    for (lettre1 = 'A'; lettre1 <= 'Z'; lettre1 = lettre1 + 1)
    {
        for (lettre2 = 'A'; lettre2 <= 'Z'; lettre2 = lettre2 + 1)
        {
            for (lettre3 = 'A'; lettre3 <= 'Z'; lettre3 = lettre3 + 1)
            {
                printf("%c%c%c\n", lettre1, lettre2, lettre3);
            }
        }
    }
    return 0;
}
