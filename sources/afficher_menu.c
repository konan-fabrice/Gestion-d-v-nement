#include "../headers/afficher_menu.h"

void afficher_menu()
{
    printf("\n----- MENU -----\n");
    printf("ID\tNom\t\tPrix\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%.2f€\n", menu[i].id, menu[i].nom, menu[i].prix);
    }
}
