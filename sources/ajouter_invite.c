#include "../headers/ajouter_invite.h"

// Fonction pour ajouter un invité
void ajouter_invite()
{
    printf("Ajouter un nouvel invité\n");
    Invite invite;
    printf("Nom : ");
    scanf("%s", invite.nom);
    printf("Prénom : ");
    scanf("%s", invite.prenom);
    printf("Age : ");
    scanf("%d", &invite.age);
    printf("Sexe : ");
    scanf("%s", invite.sexe);
    printf("Type d'invitation (famille, ami, collègue, autre) : ");
    scanf("%s", invite.type_invitation);
    invite.is_present = 0;
    invites[num_invites] = invite;
    num_invites++;
    printf("Invité ajouté avec succès !\n");
}