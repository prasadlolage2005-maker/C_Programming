#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : KmToMeter
// Input         : float
// Output        : double
// Descryption   : convert km into Meter
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int KmToMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo*1000;
    return iMeter;
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

    iRet = KmToMeter(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}