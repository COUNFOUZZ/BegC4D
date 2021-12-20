//
//  main.c
//  ex1013
//
//  Created by Alexis Abda on 16/11/2021.
//

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int verifier(int entree);
void limiter(int stop);

int main()
{
    int x;
    
    printf("Indiquez une valeur pour stopper (0-100): ");
    scanf("%d", &x);
    if (verifier(x))
    {
        limiter(x);
    }
    else
    {
        printf("Vous n'avez pas entré une valeur valide !");
    }
    return 0;
}

int verifier(int entree)
{
    if (entree < 0 || entree > 100)
        return FALSE;
    return TRUE;
}

void limiter(int stop)
{
    int x;
    
    for (x = 0; x <= 100; x = x + 1)
    {
        printf("%d ", x);
        if (x == stop)
        {
            puts("Vous gagnez !");
            return;
        }
    }
    puts("Je gagne !");
}
