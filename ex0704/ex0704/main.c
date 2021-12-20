//
//  main.c
//  ex0704
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("J'attend trois lettres : ");
    a = getchar();
    b = getchar();
    c = getchar();
    printf("Les trois lettres sont '%c', '%c', '%c'.\n", a, b, c);
    return 0;
}
