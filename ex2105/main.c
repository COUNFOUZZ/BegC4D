//
//  main.c
//  ex2105
//
//  Created by Alexis Abda on 24/01/2022.
//

#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;

    time(&tictoc);
    printf("Il est exactement %s\n", ctime(&tictoc));

    return(0);
}