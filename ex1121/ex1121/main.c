//
//  main.c
//  ex1121
//
//  Created by Alexis Abda on 18/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int devinessai, x;
    
    srand((unsigned)time(NULL));
    x = rand();
    printf("Tentez de deviner le chiffre secret : ");
    scanf("%d", &devinessai);
    if (devinessai == x)
    {
        puts("Bravo !");
        return 0;
    }
    if (devinessai != x)
    {
        printf("Non, ce n'est pas cela, le chiffre secret était %d\n", x);
        return 1;
    }
}
