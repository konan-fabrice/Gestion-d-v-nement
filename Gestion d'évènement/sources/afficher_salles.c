#include <stdio.h>
#include "../headers/afficher_salles.h"

void afficher_salles()
{
    printf("Salles de cinéma :\n");
    for (int i = 0; i < num_rooms; i++)
    {
        printf("%d. Capacité : %d\n", rooms[i].id, rooms[i].capacity);
    }
}