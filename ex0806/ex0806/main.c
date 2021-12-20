//
//  main.c
//  ex0806
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

#define SECRET 17

int main()
{
    int devinessai;
    
    printf("Tentez de deviner le chiffre secret : ");
    scanf("%d", &devinessai);
    if (devinessai == SECRET)
    {
        puts("Bravo !");
        return 0;
    }
    if (devinessai != SECRET)
    {
        puts("Non, ce n'est pas cela !");
        return 1;
    }
}
