#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : SqureMeter
// Input         : Integer
// output        : Float
// Descryption   : convert squrefeet into squremeter
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

double SqureMeter(int iNo)
{
    float fSqmeter = 0;

    fSqmeter = 0.0929*iNo;
    return fSqmeter;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Squre Feet\n");
    scanf("%d",&iValue);

    dRet=SqureMeter(iValue);
    printf("%lf",dRet);

    return EXIT_SUCCESS;
}