//
//  main.c
//  ex2111
//
//  Created by Alexis Abda on 27/01/2022.
//

#include <stdio.h>
#include <time.h>


int main()
{
    time_t present, avant;
    float delai = 0.0;

    time(&avant);
    puts("Commencer");
    while(delai < 1)
    {
        time(&present);
        delai = difftime(present, avant);
        printf("%f\r", delai);
    }
    puts("\nStopper");

    return(0);
}
