//
//  main.c
//  ex1504
//
//  Created by Alexis Abda on 29/11/2021.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    
    for (i=0; i<argc; i++)
        printf("Arg#%d = %s\n", i+1, argv[i]);
    return 0;
}
