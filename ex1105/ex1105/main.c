//
//  main.c
//  ex1105
//
//  Created by Alexis Abda on 17/11/2021.
//

#include <stdio.h>

int main()
{
    int a,b;
    
    b = 16;
    printf("Avant, a ne change pas encore et b = %d\n", b);
    a = b++;
    printf("Après, a = %d et b = %d\n", a, b);
}
