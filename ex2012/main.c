//
//  main.c
//  ex2012
//
//  Created by Alexis Abda on 21/01/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct stypik{
    int maval;
    struct stypik *asuiv;
};
struct stypik *aprems;
struct stypik *acour;
struct stypik *anouv;

int menu(void);
void ajouter(void);
void montrer(void);
void supprimer(void);
struct stypik *creer(void);

int main()
{
    int choixmenu = '\0';
    aprems = NULL;

    while(choixmenu != 'Q')
    {
        choixmenu = menu();
        switch(choixmenu)
        {
            case 'M':
            montrer();
            break;

            case 'A':
            ajouter();
            break;

            case 'S':
            supprimer();
            break;

            case 'Q':
            break;

            default:
            break;
        }
    }

    return(0);
}

int menu(void)
{
    int ch;

    printf("M)ontrer, A)jouter, S)upprimer, Q)uitter :");
    ch = getchar();
    while(getchar() != '\n');
    
    return(toupper(ch));
}

void ajouter(void)
{
    if(aprems == NULL)
    {
        aprems = creer();
        acour = aprems;
    }
    else
    {
        acour = aprems;
        while(acour->asuiv)
            acour = acour->asuiv;
        anouv = creer();
        acour->asuiv = anouv;
        acour = anouv;
    }
    printf("Indiquez une valeur numérique : ");
    scanf("%d", &acour->maval);
    acour->asuiv = NULL;
    while(getchar() != '\n');
}

void montrer(void)
{
    int count = 1;

    if(aprems == NULL)
    {
        puts("Rien à afficher");
        return;
    }
    puts("Affichage complet :");
    acour = aprems;
    while(acour)
    {
        printf("Enregistrement %d: %d\n", count, acour->maval);
        acour = acour->asuiv;
        count++;
    }
}

void supprimer(void)
{
    struct stypik *eprec;
    int r,c;

    if(aprems == NULL)
    {
        puts("Aucun enregistrement !");
        return;
    }
    puts("Choisissez quel enreg. supprimer :");
    montrer();
    printf("Enregistrement : ");
    scanf("%d", &r);
    while(getchar() != '\n');
    c = 1;
    acour = aprems;
    eprec = NULL;
    while(c != r)
    {
        if(acour == NULL)
        {
            puts("Enreg. introuvable");
            return;
        }
        eprec = acour;
        acour = acour->asuiv;
        c++;
    }
    if(eprec == NULL)
        aprems = acour->asuiv;
    else
        eprec->asuiv = acour->asuiv;
    printf("L'enreg. %d n'existe plus.\n", r);
    free(acour);
}

struct stypik *creer(void)
{
    struct stypik *a;

    a = (struct stypik *)malloc(sizeof(struct stypik));
    if(a == NULL)
    {
        puts("Erreur malloc()");
        exit(1);
    }

    return(a);
}
