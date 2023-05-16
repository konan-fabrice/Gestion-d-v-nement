#ifndef SALLE_H
#define SALLE_H

#define MAX_ROOMS 10

typedef struct
{
    int id;
    int capacity;
} Salle;

extern Salle rooms[MAX_ROOMS];
extern int num_rooms;

#endif
