#ifndef TICKET_H
#define TICKET_H

#include "salle.h"

typedef struct
{
    int id;
    int schedule_id;
} Ticket;
#define MAX_HOURS 10

extern Ticket tickets[MAX_ROOMS * MAX_HOURS];
extern int num_tickets;

#endif
