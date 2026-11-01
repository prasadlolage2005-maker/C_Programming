#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : EvenSum
// Input         : Integer
// Descryption   : Display EvenSum
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int EvenSum(int iStart,int iEnd)
{
    int iRange = 0;
    int iSum =0;

    if(iStart < 0 || iEnd < 0)
    {
        printf("invalid Input\n");
        return EXIT_FAILURE;
    }

    for(iRange=iStart; iRange<=iEnd; iRange++)
    {
        if(iRange % 2 == 0)
        {
            iSum=iSum+iRange;
        }
    }
    return iSum;
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

    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    iRet=EvenSum(iValue1,iValue2);
    printf("%d",iRet);
    return EXIT_SUCCESS;
}