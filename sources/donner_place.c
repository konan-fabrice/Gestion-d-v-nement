#include <stdio.h>
#include "../headers/donner_place.h"

bool donner_place()
{
    if (nombre_de_place_occupe == MAX_PLACES)
    {
        printf("Le nombre de place total est atteint ");
        return false;
    }
    nombre_de_place_occupe += 1;
    return true;
}