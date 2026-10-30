#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Input         : Integer
// Descryption   : factorial
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact=1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is :%d",iRet);

    return EXIT_SUCCESS;
}