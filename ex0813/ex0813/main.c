//
//  main.c
//  ex0813
//
//  Created by Alexis Abda on 15/11/2021.
//

#include <stdio.h>

int main()
{
    int premier, second;
    
    printf("Indiquez la valeur de premier : ");
    scanf("%d", &premier);
    printf("Indiquez la valeur de second : ");
    scanf("%d", &second);
    
    puts("Evaluation en cours...");
    if (premier < second)
    {
        printf("%d est plus petit que %d\n", premier, second);
    }
    else if (premier > second)
    {
        printf("%d est plus grand que %d\n", premier, second);
    }
    else
    {
        printf("%d est égal à %d\n", premier, second);
    }
    return 0;
}
