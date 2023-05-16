#include <stdio.h>
#include "../headers/afficher_horaires.h"

void afficher_horaires()
{
    printf("Programmation :\n");
    for (int i = 0; i < num_schedules; i++)
    {
        Horaire schedule = schedules[i];
        Film film = films[schedule.film_id - 1];
        Salle room = rooms[schedule.room_id - 1];
        printf("%d h : %s (%s, %d minutes) - Salle %d (%d places restantes)\n", schedule.hour, film.name, film.genre, film.duration, room.id, room.capacity);
    }
}