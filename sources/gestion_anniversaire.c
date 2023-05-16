#include "../headers/gestion_anniversaire.h"
#include "../headers/afficher_menu.h"
#include "../headers/afficher_reservation.h"
#include "../headers/ajouter_reservation.h"

void gestion_anniversaire()
{
    int choix;
    do
    {
        printf("\n----- GESTION ANNIVERSAIRE -----\n");
        printf("1. Afficher le menu\n");
        printf("2. Afficher les réservations\n");
        printf("3. Ajouter une réservation\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            afficher_menu();
            break;
        case 2:
            afficher_reservations();
            break;
        case 3:
            if (!ajouter_reservation())
            {
                printf("Impossible d'ajouter une réservation.\n");
            }
            break;
        case 4:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 4);
}