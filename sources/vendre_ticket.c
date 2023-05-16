#include <stdio.h>
#include "../headers/vendre_ticket.h"
#include "../headers/donner_place.h"

void vendre_ticket()
{
    int schedule_id;
    bool place_a_ete_donnee = donner_place();
    if (!place_a_ete_donnee)
    {
        return;
    }
    printf("ID de la programmation : ");
    scanf("%d", &schedule_id);
    Horaire schedule = schedules[schedule_id - 1];
    if (schedule.room_id == -1)
    {
        printf("Il n'y a pas de places disponibles pour cette programmation.\n");
        return;
    }
    Salle room = rooms[schedule.room_id - 1];
    room.capacity++;
    Ticket ticket;
    ticket.id = num_tickets + 1;
    ticket.schedule_id = schedule_id;
    tickets[num_tickets] = ticket;
    num_tickets++;
    printf("Billet vendu pour la programmation %d.\n", schedule_id);
}