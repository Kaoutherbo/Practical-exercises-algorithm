#include"main.h"

int getOption(char *s) {
    int option;
    printf("%s :",s);
    scanf("%d",&option);

    if(option != 1 && option != 2 && option != 3)
    {
        printf("Error : this is unvalid option .\n");
        return getOption(s);
    }
    else
    {
        return option ;
    } 
}