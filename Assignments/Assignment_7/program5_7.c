#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Input         : Integer
// Descryption   : print Multiple
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

        for(iCnt =1; iCnt <= 5; iCnt++)
        {
            printf("%d\t",iNo*iCnt);
        }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}