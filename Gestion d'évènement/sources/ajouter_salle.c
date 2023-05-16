#include <stdio.h>
#include "../headers/salle.h"

void ajouter_salle()
{
    Salle room;
    room.id = num_rooms + 1;
    printf("Capacité : ");
    scanf("%d", &room.capacity);
    rooms[num_rooms] = room;
    num_rooms++;
}
