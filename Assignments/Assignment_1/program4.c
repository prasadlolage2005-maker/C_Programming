#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Input         : Integer
// Output        : Boolean
// Descryption   : check is divisible 5 or not
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if(iNo%5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number to check whther is divisible 5 or not\n");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet==TRUE)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not Divisible 5\n");
    }

    return EXIT_SUCCESS;
}