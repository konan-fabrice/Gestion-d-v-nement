#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../headers/gestion_cinema.h"
#include "../headers/gestion_anniversaire.h"
#include "../headers/gestion_mariage.h"

int main()
{
    int choix_gestion;
    do
    {
        printf("Gestion d'évênements\n");
        printf("-----------------\n");
        printf("Quel type d'évênement voulez vous gérez\n");
        printf("1. Pour gérer un cinema\n");
        printf("2. Pour gérer un anniversaire\n");
        printf("3. Pour gérez un mariage\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix_gestion);
        switch (choix_gestion)
        {
        case 1:
            gestion_cinema();
            break;
        case 2:
            gestion_anniversaire();
            break;
        case 3:
            gestion_mariage();
            break;
        case 0:
            printf("Au revoir\n");
            break;
        default:
            printf("Choix invalide.\n");
            break;
        }
    } while (choix_gestion != 0);

    return 0;
}