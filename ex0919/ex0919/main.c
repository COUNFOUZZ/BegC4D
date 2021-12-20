//
//  main.c
//  ex0919
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int comptr;
    
    comptr = 0;
    while (1)
    {
        printf("%d, ", comptr);
        comptr = comptr + 1;
        if (comptr > 50)
        {
            break;
        }
    }
    putchar('\n');
    return 0;
}
