//
//  main.c
//  ex1109
//
//  Created by Alexis Abda on 17/11/2021.
//

#include <stdio.h>

int main()
{
    float alpha;
    
    alpha = 501;
    printf("alpha = %.1f\n", alpha);
    alpha += 99;
    printf("alpha = %.1f\n", alpha);
    alpha -= 250;
    printf("alpha = %.1f\n", alpha);
    alpha /= 82;
    printf("alpha = %.1f\n", alpha);
    alpha *= 4.3;
    printf("alpha = %.1f\n", alpha);
    return 0;
}
