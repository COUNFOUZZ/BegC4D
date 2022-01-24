//
//  main.c
//  ex2101
//
//  Created by Alexis Abda on 24/01/2022.
//

#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;

    time(&tictoc);
    printf("Il est exactement %ld\n", tictoc);
    return(0);
}