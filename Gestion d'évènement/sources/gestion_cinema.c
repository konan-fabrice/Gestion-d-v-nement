#include "../headers/gestion_cinema.h"

void gestion_cinema()
{
    int choice;
    do
    {
        printf("Gestion de cinéma\n");
        printf("-----------------\n");
        printf("1. Ajouter un film\n");
        printf("2. Ajouter une salle de cinéma\n");
        printf("3. Ajouter une programmation\n");
        printf("4. Voir la liste des films\n");
        printf("5. Voir la liste des salles de cinéma\n");
        printf("6. Voir la programmation\n");
        printf("7. Vendre un billet\n");
        printf("8. Afficher le nombre de place disponible\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ajouter_film();
            break;
        case 2:
            ajouter_salle();
            break;
        case 3:
            ajouter_horaire();
            break;
        case 4:
            afficher_films();
            break;
        case 5:
            afficher_salles();
            break;
        case 6:
            afficher_horaires();
            break;
        case 7:
            vendre_ticket();
            break;
        case 8:
            afficher_place_disponible();
            break;
        case 0:
            printf("Au revoir !\n");
            break;
        default:
            printf("Choix invalide.\n");
            break;
        }
    } while (choice != 0);
}