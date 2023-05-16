#ifndef HORAIRE_H
#define HORAIRE_H

#include "film.h"
#include "ticket.h"

typedef struct
{
    int hour;
    int room_id;
    int film_id;
} Horaire;

extern Horaire schedules[MAX_ROOMS * MAX_HOURS];
extern int num_schedules;

#endif
