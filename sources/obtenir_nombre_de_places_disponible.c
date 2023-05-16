#include "../headers/obtenir_nombre_de_places_disponible.h"

int obtenir_nombre_de_places_disponible()
{
    int nbPlacesDispo = 50;
    for (int i = 0; i < nbReservations; i++)
    {
        nbPlacesDispo -= reservations[i].nbPlaces;
    }
    return nbPlacesDispo;
}
