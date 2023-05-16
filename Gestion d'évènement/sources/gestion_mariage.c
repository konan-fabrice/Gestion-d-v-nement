#include "../headers/gestion_mariage.h"

void gestion_mariage()
{
    int choix;
    do
    {
        printf("Gestion de mariage\n");
        printf("------------------\n");
        printf("1. Ajouter un invité\n");
        printf("2. Afficher la liste des invités\n");
        printf("3. Marquer la présence d'un invité\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            ajouter_invite();
            break;
        case 2:
            afficher_invites();
            break;
        case 3:
            marquer_presence();
            break;
        case 0:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide.\n");
            break;
        }
    } while (choix != 0);
}