//
//  main.c
//  ex2106
//
//  Created by Alexis Abda on 26/01/2022.
//

#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *present;

    time(&tictoc);
    present = localtime(&tictoc);
    printf("A présent, nous sommes le %d/%d/%d\n", \
        present->tm_mday,
        present->tm_mon,
        present->tm_year);

    return(0);
}