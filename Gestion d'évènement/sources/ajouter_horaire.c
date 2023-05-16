#include <stdio.h>
#include "../headers/ajouter_horaire.h"

void ajouter_horaire()
{
    Horaire schedule;
    schedule.room_id = -1;
    printf("Heure (en heures) : ");
    scanf("%d", &schedule.hour);
    printf("Film ID : ");
    scanf("%d", &schedule.film_id);
    for (int i = 0; i < num_rooms; i++)
    {
        if (rooms[i].capacity > 0)
        {
            schedule.room_id = rooms[i].id;
            rooms[i].capacity--;
            break;
        }
    }
    schedules[num_schedules] = schedule;
    num_schedules++;
}