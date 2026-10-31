#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Input         : Integer
// Descryption   : Even factorial
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iFact =1;
    int iCnt =0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            iFact=iFact*iCnt;
        }
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
    int iValue =0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =EvenFactorial(iValue);
    printf("Even factorial Number is %d",iRet);

    return EXIT_SUCCESS;
}