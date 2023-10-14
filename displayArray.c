#include"main.h"

// Procedure to display the array 
void displayArray(int *arr, int size, char *s)
{
     printf("\n%s : \n", s);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
