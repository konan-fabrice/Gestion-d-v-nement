#include "../headers/marque_presence.h"

void marquer_presence()
{
    printf("Marquer la présence d'un invité\n");
    printf("Nom de l'invité : ");
    char nom[50];
    scanf("%s", nom);
    printf("Prénom de l'invité : ");
    char prenom[50];
    scanf("%s", prenom);
    int found = 0;
    for (int i = 0; i < num_invites; i++)
    {
        if (strcmp(invites[i].nom, nom) == 0 && strcmp(invites[i].prenom, prenom) == 0)
        {
            invites[i].is_present = 1;
            found = 1;
            printf("Présence de l'invité %s %s enregistrée.\n", nom, prenom);
            break;
        }
    }
    if (!found)
    {
        printf("Invité introuvable.\n");
    }
}