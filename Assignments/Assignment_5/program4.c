#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayMultipleDivisibility
// Input         : Integer
// Descryption   : chehck Divisibility by 3 and 5
// Date          : 21/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void DisplayMultipleDivisibility(int iNo)
{
    if(iNo%3 == 0 && iNo%5 == 0)
    {
        printf("Divisible by 3 and 5\n");
    }
    else if(iNo%3 == 0)
    {
        printf("Divisible by 3\n");
    }
    else if(iNo%5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by either\n");
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

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayMultipleDivisibility(iValue);
    return EXIT_SUCCESS;
}