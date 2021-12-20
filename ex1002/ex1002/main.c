//
//  main.c
//  ex1002
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

void prompt(void);
void busy(void);

int main()
{
    busy();
    return 0;
}

void prompt(void)
{
    printf("C:\\DOS> ");
}

void busy(void)
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
}
