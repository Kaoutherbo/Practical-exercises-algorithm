// Question 2
#include"main.h"

void displayArray(int* , int ,char*);
int getSize(char *s);

int main() {

    int size = getSize("Enter the size of the array : ");

    int *arr = (int *)malloc(size * sizeof(int)); // Memory allocation for the array 

    if(arr == NULL)
    {
        printf("Memory can't be alocated !");
        return -1;
    }

   remplirTableauAvecEntiersAliaoire(arr, size, 1000000); // Filling the array whith random values

    // Display the array before sorting
    displayArray(arr , size , "The generated array");

    // Sort the array whith selection
     TriParSelection(arr, size);

    // Display the array after sorting
    displayArray(arr,size,"The array after sorting");

    free(arr); // Freeing allocated memory 
    return 0;
}

// Frocedure to display the array 
void displayArray(int *arr, int size, char *s)
{
     printf("\n%s : \n", s);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// Function to get the size of the array
int getSize(char *s)
{
    int size;
    printf("%s", s);
    scanf("%d", &size);

    if(size <= 0)
    {
        printf("Error: The entered value is not valid.\n");
        getSize(s);
    }
    else
    {
        return size ;    
    }    
}
