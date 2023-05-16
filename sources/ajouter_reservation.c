#include <stdio.h>
#include "../headers/ajouter_reservation.h"
#include "../headers/afficher_menu.h"
#include "../headers/obtenir_prix.h"
#include "../headers/obtenir_nombre_de_places_disponible.h"

int ajouter_reservation()
{
    if (obtenir_nombre_de_places_disponible() == 0)
    {
        return 0;
    }
    Reservation r;
    printf("Entrez votre nom : ");
    scanf("%s", r.nom);
    printf("Combien de places souhaitez-vous réserver ? ");
    scanf("%d", &r.nbPlaces);
    if (r.nbPlaces > obtenir_nombre_de_places_disponible())
    {
        printf("Désolé, il ne reste plus que %d places disponibles.\n", obtenir_nombre_de_places_disponible());
        return 0;
    }
    afficher_menu();
    printf("Entrez l'ID du plat choisi : ");
    scanf("%d", &r.idMenu);
    while (obtenir_prix(r.idMenu) == 0.0)
    {
        printf("ID invalide. Entrez l'ID du plat choisi : ");
        scanf("%d", &r.idMenu);
    }
    r.id = nbReservations + 1;
    reservations[nbReservations++] = r;
    return 1;
}
