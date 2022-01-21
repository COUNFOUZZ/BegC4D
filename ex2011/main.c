//
//  main.c
//  ex2011
//
//  Created by Alexis Abda on 18/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMBRES 5

struct actions{
    char symbole[5];
    int quantite;
    float cours;
    struct actions *asuiv;
};
struct actions *aprems;
struct actions *acour;
struct actions *anouv;

struct actions *creer_struc(void);
void remplir_struc(struct actions *a, int c);
void montrer_struc(struct actions *a);

int main()
{
    int x;
    for(x=0; x<MEMBRES; x++)
    {
        if(x == 0)
        {
            aprems = creer_struc();
            acour = aprems;
        }
        else 
        {
            anouv = creer_struc();
            acour->asuiv = anouv;
            acour = anouv;
        }
        remplir_struc(acour, x+1);
    }
    acour->asuiv = NULL;

    //  Affichage
    puts("Portefeuille");
    printf("Symbole\tQte\tCours\tValeur\n");
    acour = aprems;
    while(acour)
    {
        montrer_struc(acour);
        acour = acour->asuiv;
    }

    return(0);
}

struct actions *creer_struc(void)
{
    struct actions *a;

    a = (struct actions *)malloc(sizeof(struct actions));
    if(a == NULL)
    {
        puts("Erreur malloc()");
        exit(1);
    }
    return(a);

}

void remplir_struc(struct actions *a, int c)
{
    printf("Membre #%d/%d:\n", c, MEMBRES);
    printf("Symbole : ");
    scanf("%s", a->symbole);
    printf("Nombre d'actions : ");
    scanf("%d", &a->quantite);
    printf("Cours : ");
    scanf("%f", &a->cours);
}

void montrer_struc(struct actions *a)
{
    printf("%s\t%d\t%.2f\t%.2f\n",\
    a->symbole,
    a->quantite,
    a->cours,
    a->quantite*a->cours);
}
