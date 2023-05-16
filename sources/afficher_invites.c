#include "../headers/afficher_invites.h"

void afficher_invites()
{
    printf("Liste des invités\n");
    printf("-----------------\n");
    printf("Nom\tPrénom\tAge\tSexe\tType d'invitation\tPrésence\n");
    for (int i = 0; i < num_invites; i++)
    {
        Invite invite = invites[i];
        printf("%s\t%s\t%d\t%s\t%s\t", invite.nom, invite.prenom, invite.age, invite.sexe, invite.type_invitation);
        if (invite.is_present)
        {
            printf("Présent\n");
        }
        else
        {
            printf("Absent\n");
        }
    }
}