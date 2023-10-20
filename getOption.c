#include"main.h"

int getOption(char *s) {
    int option;
    printf("%s :",s);
    scanf("%d",&option);

    if(option != 0 && option != 1 )
    {
        printf("Error : this is unvalid option .\n");
        return getOption(s);
    }
    else
    {
        return option ;
    } 
}