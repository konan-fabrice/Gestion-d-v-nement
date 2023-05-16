

#ifndef PLAT_H
#define PLAT_H

typedef struct
{
    int id;
    char nom[50];
    float prix;
} Plat;

#define MAX_PLATS 100

extern Plat menu[MAX_PLATS];

#endif