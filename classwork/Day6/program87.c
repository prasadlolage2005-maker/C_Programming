#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if (((iNo%5) == 0))
    {
        if((iNo%3) == 0)
        {
             printf("Number is divisible\n");
        }
        else
        {
            printf("Number is not divisible\n");
        }
    }
    else
    {
        printf("Number is not divisible by 3 and 5\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number to check whether number is divisible by 5 amd 3:\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}