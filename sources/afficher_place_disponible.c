#include "../headers/afficher_place_disponible.h"

void afficher_place_disponible()
{
    int nombre_de_place_disponible = MAX_PLACES - nombre_de_place_occupe;
    printf("Le nombre de place disponible est : %d sur %d au total \n", nombre_de_place_disponible, MAX_PLACES);
}