//
//  main.c
//  ex2104
//
//  Created by Alexis Abda on 24/01/2022.
//

#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    time_t tictoc;

    for(i=0;i<20;i++)
    {
    tictoc = time(NULL);
    printf("%d.\tIl est exactement %ld\n", i+1, tictoc);
    time(&tictoc);
    printf("%d.\tIl est exactement %ld\n", i+1, tictoc);
    }
    return(0);
}