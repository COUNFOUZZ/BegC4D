//
//  main.c
//  ex1004
//
//  Created by Alexis Abda on 16/11/2021.
//

#include <stdio.h>

void prompt(void)
{
    printf("C:\\DOS> ");
}


int main()
{
    int loop;
    char input[32];
    
    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 32, stdin);
        loop = loop + 1;
    }
    return 0;
}
