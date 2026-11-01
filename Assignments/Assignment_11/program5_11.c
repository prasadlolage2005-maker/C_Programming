#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayRangeRev
// Input         : Integer
// Descryption   : DisplayRangeRev
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void DisplayRangeRev(int iStart,int iEnd)
{
    int iRange = 0;

    for(iRange = iEnd; iRange >= iStart; iRange--)
    {
        printf("%d\t",iRange);
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

    printf("Enter Ending Number\n");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1,iValue2);


    return EXIT_SUCCESS;
}