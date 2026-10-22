#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckGreater
// Input         : Integer,Integer
// Descryption   : find the greater of two number
// Date          : 20/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckGreater(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d",iNo1);
    }
    else
    {
        printf("%d",iNo2);  
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter first Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    CheckGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}