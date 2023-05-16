#include <stdio.h>
#include "../headers/afficher_films.h"

void afficher_films()
{
    printf("Films :\n");
    for (int i = 0; i < num_films; i++)
    {
        printf("%d. %s (%s, %d minutes)\n", films[i].id, films[i].name, films[i].genre, films[i].duration);
    }
}