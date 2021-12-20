//
//  main.c
//  ex0712
//
//  Created by Alexis Abda on 14/11/2021.
//

#include <stdio.h>

int main()
{
    char prenom[15];
    
    printf("Veuillez indiquer votre petit nom : ");
    scanf("%s", prenom);
    printf("Ravi de vous saluer, %s.\n", prenom);
    return 0;
}
