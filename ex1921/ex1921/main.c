//
//  main.c
//  ex1921
//
//  Created by Alexis Abda on 12/01/2022.
//

#include <stdio.h>

int main()
{
    char *fruits[] = {
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"
    };
    char *temp;
    int a, b, x;
    
    for (a=0; a<6; a++)
        for (b=a+1; b<7; b++)
        {
            if(*(fruits+a) > *(fruits+b))
            {
                temp = *(fruits+a);
                *(fruits+a) = *(fruits+b);
                *(fruits+b) = temp;
            }
        }
    
    for (x=0; x<7; x++)
        puts(fruits[x]);
        
    return 0;
}
