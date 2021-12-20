//
//  main.c
//  ex1505
//
//  Created by Alexis Abda on 30/11/2021.
//

#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main(int argc, char *argv[])
{
    puts("Ce programme stoppe abruptement.");
    sub();
    puts("Est-ce l'intention initiale ?");
    return 0;
}

void sub(void)
{
    puts("C'est normal");
    exit(0);
}
