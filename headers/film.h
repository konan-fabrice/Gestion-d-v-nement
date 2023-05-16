#ifndef FILM_H
#define FILM_H

typedef struct
{
    int id;
    char name[50];
    char genre[20];
    int duration;
} Film;

#define MAX_FILMS 100

extern Film films[MAX_FILMS];
extern int num_films;

#endif