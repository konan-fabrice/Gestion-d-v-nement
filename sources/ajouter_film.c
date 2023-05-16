#include <stdio.h>
#include "../headers/ajouter_film.h"

void ajouter_film()
{
    Film film;
    film.id = num_films + 1;
    printf("Nom : ");
    scanf("%s", film.name);
    printf("Genre : ");
    scanf("%s", film.genre);
    printf("Durée (en minutes) : ");
    scanf("%d", &film.duration);
    films[num_films] = film;
    num_films++;
}
