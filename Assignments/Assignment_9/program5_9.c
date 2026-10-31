#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Input         : Integer
// Outut         : Integer
// Descryption   : Diffrence between even and odd factorial
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact =1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact=iEvenFact*iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iOddFact=iOddFact*iCnt;
        }
    }
    return iEvenFact-iOddFact;
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

    iRet=FactorialDiff(iValue);
    printf("Diffrence is : %d ",iRet);

    return EXIT_SUCCESS;
}