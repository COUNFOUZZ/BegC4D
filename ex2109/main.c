//
//  main.c
//  ex2109
//
//  Created by Alexis Abda on 27/01/2022.
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
        present->tm_mon+1,
        present->tm_year+1900);
    
    if(present->tm_hour > 12)
        printf("%d:",present->tm_hour-12);
    else
        printf("%d:",present->tm_hour);
    printf("%d:%d ",
            present->tm_min,
            present->tm_sec
          );
    printf("%s\n", present->tm_hour > 11 ? "P.M." : "A.M.");

    /*  Autre solution :
    if(present->tm_hour > 12)
    {
        printf("Il est : %d:%d:%d P.M.\n", \
            present->tm_hour-12,
            present->tm_min,
            present->tm_sec);
    }
    else
    {
        printf("Il est : %d:%d:%d A.M.\n", \
            present->tm_hour-12,
            present->tm_min,
            present->tm_sec);
    }
    */


    return(0);
}
