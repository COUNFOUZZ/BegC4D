//
//  main.c
//  ex0904
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int cmptr;
    
    for (cmptr = 11; cmptr <= 19; cmptr = cmptr+1)
    {
        printf("%d\t", cmptr);
    }
    putchar('\n');
    return 0;
}
