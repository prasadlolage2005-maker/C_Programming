/*
    ----------------------------------
            Operation ||
    -----------------------------------
      Result 1    Result 2    Result 3
    -----------------------------------
        TRUE        TRUE        TRUE        Short cicuit
        TRUE        FALSE       TRUE        short circuit
        FALSE       TRUE        TRUE
        FALSE       FALSE       FALSE
    -----------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if (((iNo%5) == 0) ||  ((iNo%3) == 0))
    {
        printf("Number is divisible \n");
    }
    else
    {
        printf("Number is not divisible\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number to check whether number is divisible by 5 or 3:\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}