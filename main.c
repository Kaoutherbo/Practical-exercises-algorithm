// Question 2
#include"main.h"


int main() {

    int size = getSize("Enter the size of the array : ");

    // Memory allocation for the array
    int *arr = (int *)malloc(size * sizeof(int));  

    if(arr == NULL)
    {
        printf("Memory can't be alocated !");
        return -1;
    }

    // Filling the array whith random values
   remplirTableauAvecEntiersAliaoire(arr, size, 1000000); 

    // Display the array before sorting
    displayArray(arr , size , "The generated array");

    // Sort the array whith selection
     TriParSelection(arr, size);

    // Display the array after sorting
    displayArray(arr,size,"The array after sorting");

    free(arr); // Freeing allocated memory 
    return 0;
}