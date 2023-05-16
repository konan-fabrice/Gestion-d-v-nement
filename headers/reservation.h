#ifndef RESERVATION_H
#define RESERVATION_H

typedef struct
{
    int id;
    char nom[50];
    int nbPlaces;
    int idMenu;
} Reservation;

#define MAX_RESERVATIONS

extern Reservation reservations[MAX_RESERVATIONS];
extern int nbReservations;

#endif