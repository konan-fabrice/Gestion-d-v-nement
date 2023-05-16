#ifndef PLACE_H
#define PLACE_H

typedef struct
{
    int id;
} Place;

#define MAX_PLACES 10

extern Place places[MAX_PLACES];
extern int nombre_de_place_occupe;

#endif