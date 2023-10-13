// Question 2
#include"main.h"

int main() {
    int taille;
    printf("Enter the size of the array : ");
    scanf("%d", &taille);

    int *tab = (int *)malloc(taille * sizeof(int)); // Allocation de mémoire pour le tableau

   remplirTableauAvecEntiersAliqoire(tab, taille, 1000000);// Remplissage du tableau avec des valeurs aléatoires

    // Affichage du tableau (facultatif) avant le trie
    printf("The generated array :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    // trie le tableau par selection
    TriParSelection(tab, taille);

    // Affichage du tableau (facultatif) apris le trie
    printf("\nThe array after sorting :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }

    free(tab); // Libération de la mémoire allouée pour le tableau
    return 0;
}
