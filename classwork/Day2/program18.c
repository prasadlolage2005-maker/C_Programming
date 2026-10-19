#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    
    if((iNo%2)==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}

int main()
{
    int ivalue=0;

    printf("Enter Number to check Whether is Even or odd\n");
    scanf("%d",&ivalue);

    CheckEven(ivalue);


    return EXIT_SUCCESS;
}