//
//  main.c
//  ex0811
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int a, b;
    
    a = 6;
    printf("Veuillez saisier la valeur de b : ");
    scanf("%d", &b);
    
    if (a > b)
    {
        printf("%d est plus grand que %d\n", a, b);
    }
    else
    {
        printf("%d n'est pas plus grand que %d\n", a, b);
    }
    return 0;
}
