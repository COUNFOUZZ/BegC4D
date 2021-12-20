//
//  main.c
//  ex1916
//
//  Created by Alexis Abda on 18/12/2021.
//

#include <stdio.h>

int main()
{
    char *sample = "D'ou me viendra le secours?\n";
    char *samplesave;
    samplesave = sample;
    
    //while (putchar(*samplesave++));
    puts(sample);
    puts(samplesave);
    return 0;
}
