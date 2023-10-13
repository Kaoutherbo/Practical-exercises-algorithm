// Question 1
#include "main.h"

void remplirTableauAvecEntiersAliaoire(int tab[], int taille, int ValeurMax)
{
     // Initialisation de la variable aléatoire
    srand(time(NULL));

    // Parcours du tableau
    for (int i = 0; i < taille; i++)
    {
        // Génération d'un entier aléatoire
        int entierAleatoire = rand() % ValeurMax;

        // Ajout de l'entier aléatoire au tableau
        tab[i] = entierAleatoire;
    }
}
