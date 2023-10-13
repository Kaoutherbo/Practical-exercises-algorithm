// Question 1
#include "main.h"

void remplirTableauAvecEntiersAliaoire(int tab[], int taille, int ValeurMax)
{
    // Array traversal 
    for (int i = 0; i < taille; i++)
    {
        tab[i] = (int)(rand() / ((double)RAND_MAX + 1) * ValeurMax);
        
    }
}
