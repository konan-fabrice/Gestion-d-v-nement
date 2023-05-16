#include <stdio.h>
#include "../headers/afficher_reservation.h"

void afficher_reservations()
{
    printf("\n----- RESERVATIONS -----\n");
    printf("ID\tNom\t\tNb places\tID menu\n");
    for (int i = 0; i < nbReservations; i++)
    {
        printf("%d\t%s\t%d\t\t%d\n", reservations[i].id, reservations[i].nom, reservations[i].nbPlaces, reservations[i].idMenu);
    }
}