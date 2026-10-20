#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;               // typedef integer into bool

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckEven
// Input         : Integer
// Output        : Boolean
// Descryption   : check whether is even or odd
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
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
    int bRet=false;

    printf("Enter Number to check Whether is Even or odd\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("NUmber is Odd\n");
    }
    return EXIT_SUCCESS;
}