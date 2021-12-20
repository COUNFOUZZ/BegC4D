//
//  main.c
//  ex1807
//
//  Created by Alexis Abda on 10/12/2021.
//

#include <stdio.h>

int main()
{
    char hello[] = "Salut!";
    int i = 0;
    
    while (hello[i])
    {
        printf("%c en %p\n", hello[i], &hello[i]);
        i++;
    }
    return 0;
}
