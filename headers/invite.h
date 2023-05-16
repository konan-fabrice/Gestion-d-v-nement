#ifndef INVITE_H
#define INVITE_H

typedef struct
{
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char type_invitation[20];
    int is_present;
} Invite;

extern Invite invites[100];
extern int num_invites;

#endif