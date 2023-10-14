#include"main.h"

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