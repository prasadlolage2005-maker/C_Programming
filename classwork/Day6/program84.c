#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if ((iNo%5) == 0 )
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not Divisisble by 5\n");
    } 
}

int main()
{
    int iValue=0;

    printf("Enter Number to check whether number is divisible by 5:\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}