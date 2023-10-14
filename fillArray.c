// Question 1
#include "main.h"

void remplirTableauAvecEntiersAliaoire(int arr[], int size, int maxValue)
{
    // Array traversal 
    for (int i = 0; i < size; i++)
    {
        arr[i] = (int)(rand() / ((double)RAND_MAX + 1) * maxValue);
        
    }
}
