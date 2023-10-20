#include"main.h"


void getUsageSort(int *arr, int size, int option)
{
    
    // Check if the option is 0
    if (option == 0) {
        TriParSelection(arr,size);
        displayArray(arr,size,"\n The array after sorting by insertion");
    }
    // Check if the option is 1
    else  {
        insertionSort(arr,size);
        displayArray(arr,size,"\n The array after sorting by insertion");
    }
    
}