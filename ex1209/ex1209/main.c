//
//  main.c
//  ex1209
//
//  Created by Alexis Abda on 19/11/2021.
//

#include <stdio.h>

int main()
{
    char prenom[16];
    
    printf("Quel est votre prénom ? ");
    fgets(prenom, 16, stdin);
    printf("Ravi de vous rencontrer %s\n", prenom);
    return 0;
}
