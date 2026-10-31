#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DollerToInr
// Input         : Integer
// Descryption   : Convert Doller into INR
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int DollerToInr(int iNo)
{
    int inr = 0;

    inr = iNo*70;
    return inr;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;
    int iRet =0;


    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=DollerToInr(iValue);

    printf("Inr Value is %d",iRet);

    return EXIT_SUCCESS;
}