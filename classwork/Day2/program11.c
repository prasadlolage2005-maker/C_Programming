#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No=0;

    printf("Enter Number:\n");
    if(scanf("%d",&No) !=1)
    {
        printf("Invalid Input\n");

        return EXIT_FAILURE;    
    }

    printf("Input is Valid\n");
    return EXIT_SUCCESS;
}