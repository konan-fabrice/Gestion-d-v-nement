#include "../headers/obtenir_prix.h"

float obtenir_prix(int id)
{
    for (int i = 0; i < 5; i++)
    {
        if (menu[i].id == id)
        {
            return menu[i].prix;
        }
    }
    return 0.0;
}