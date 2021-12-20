//
//  main.c
//  ex1001
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

void prompt(void);

int main()
{
    int loop;
    char input[32];
    
    loop = 0;
    while (loop < 5)
    {
        prompt();
        fgets(input, 31, stdin);
        loop = loop + 1;
    }
    return 0;
}

void prompt(void)
{
    printf("C:\\DOS> ");
}
