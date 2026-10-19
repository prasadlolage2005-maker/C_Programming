#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue=0;

    printf("Enter Number to check Whether is Even or odd\n");
    scanf("%d",&ivalue);

    if((ivalue%2)==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return EXIT_SUCCESS;
}