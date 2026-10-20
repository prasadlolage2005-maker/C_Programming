#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Divide
// Input         : Integer ,Integer
// Descryption   : print Division
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2 )
{
    int iAns=0;

    if(iNo2>iNo1)
    {
        return EXIT_FAILURE;
    }
    iAns=iNo1/iNo2;
    return iAns;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=15 , iValue2=5;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);

    printf("Division is :%d",iRet);

    return EXIT_SUCCESS;
}
