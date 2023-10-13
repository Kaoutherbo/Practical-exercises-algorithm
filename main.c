// Question 2
#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int *tab = (int *)malloc(size * sizeof(int)); // Allocation de mémoire pour le tableau

   remplirTableauAvecEntiersAliqoire(tab, size, 1000000);// Remplissage du tableau avec des valeurs aléatoires

    // Affichage du tableau (facultatif) avant le trie
    printf("The generated array :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    // trie le tableau par selection
    TriParSelection(tab, size);

    // Affichage du tableau (facultatif) apris le trie
    printf("\nThe array after sorting :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    free(tab); // Libération de la mémoire allouée pour le tableau
    return 0;
}
