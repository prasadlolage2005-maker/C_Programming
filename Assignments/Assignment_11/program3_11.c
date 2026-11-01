#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Input         : Integer
// Output        : Integer
// Descryption   : DisplayRangeSum
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int RangeSum(int iStart,int iEnd)
{
    int iRange = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0)
    {
        printf("invalid Input");
        return EXIT_FAILURE;
    }

    else
    {
        for(iRange = iStart; iRange <= iEnd; iRange++)
        {
            iSum=iSum+iRange;
        }
        return iSum;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter ending Number\n");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}