// Question 2
#include"main.h"
#include <time.h>

int main() {
    // Record time started
    clock_t start = clock();

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

    // Get the option for sorting array
    int option = getOption("\nType 0 for Sorting by selection.\nType 1 for Sorting by insertion.");

    // sort the array corresponding to user option and display the array after sorting
    printUsageSort(arr,size,option);

    free(arr); // Freeing allocated memory 

    // Record time finished
    clock_t finish = clock(); 
    printf("It took %d seconds to execute the program.\n", (finish - start) / CLOCKS_PER_SEC);

    return 0;
}