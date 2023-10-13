// Question 3
#include"main.h"



void TriParSelection(int tab[], int taille)
{
    for (int i = 0; i < taille - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < taille; j++) {
            if (tab[j] < tab[min_index]) {
                min_index = j;
            }
        }
        // Swap the elements for make the minimum in the position of i 
        int temp = tab[i];
        tab[i] = tab[min_index];
        tab[min_index] = temp;
    }
}
