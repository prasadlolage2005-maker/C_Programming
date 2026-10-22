#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Input         : Integer
// Descryption   : Check Whether a Number is positive or negative
// Date          : 20/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is Positive\n",iNo);
    }
    else if(iNo < 0)
    {
        printf("Number is Negative\n",iNo);
    }
    else
    {
        printf("zero\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);


    return EXIT_SUCCESS; 
}
