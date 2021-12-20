//
//  main.c
//  ex1302
//
//  Created by Alexis Abda on 27/11/2021.
//

#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "Art. 4. : La liberté consiste à pouvoir faire tout ce qui ne nuit pas à autrui : ainsi, l'exercice des droits naturels de chaque homme n'a de bornes que celles qui assurent aux autres membres de la Société la jouissance de ces mêmes droits. Ces bornes ne peuvent être déterminées que par la Loi. ";
    
    int index, alpha, blank, punct, lower, upper;
    
    alpha = blank = punct = lower = upper = 0;
    
    //  Collecte
    index = 0;
    while (phrase[index])
    {
        if(isalpha(phrase[index]))
            alpha++;
        if(isblank(phrase[index]))
            blank++;
        if(ispunct(phrase[index]))
            punct++;
        if(islower(phrase[index]))
            lower++;
        if(isupper(phrase[index]))
            upper++;
        index++;
    }
    
    //  Affichage
    printf("\"%s\"\n", phrase);
    puts("Statistiques :");
    printf("%d lettres de l'alphabet\n", alpha);
    printf("%d blancs\n", blank);
    printf("%d signes de ponctuation\n", punct);
    printf("%d lettres minuscules\n", lower);
    printf("%d lettres majuscules\n", upper);
    
    return 0;
}
