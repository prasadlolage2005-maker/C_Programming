// Accept and integer and determine whether is divisible by 5 without leaving any reminder

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Input         : Integer
// Descryption   : determine whether is divisible by 5 without leaving any reminder
// Date          : 20/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckDivisibility(int iNo)
{
    if((iNo%5)==0)
    {
        printf("divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter Number to check whether is divisible 5 or not :\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);


    return EXIT_SUCCESS;
}