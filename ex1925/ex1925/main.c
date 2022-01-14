//
//  main.c
//  ex1925
//
//  Created by Alexis Abda on 14/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *tab);
void show(int tab[]);

int main()
{
    int tab[10];
    
    create(tab);
    show(tab);
    
    return(0);
}

void create(int *tab)
{
    int i, r;
    srand((unsigned)time(NULL));
    
    for (i=0; i<10; i++) {
        r = rand();
        r%=10;
        *(tab+i) = r;
    }
    
}


void show(int tab[])
{
    int i;
    
    for (i=0; i<10; i++)
        printf("%d. %d\n", i+1, *(tab+i));
}
