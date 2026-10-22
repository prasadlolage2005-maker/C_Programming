#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Input         : Integer
// Descryption   : Check leap Year
// Date          : 21/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckLeapYear(int iNo)
{
    if((iNo%4) == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("It is not leap Year\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iYear=0;

    printf("Enter Year\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}