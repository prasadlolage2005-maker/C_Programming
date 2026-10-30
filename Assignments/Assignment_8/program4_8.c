#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Input         : Integer
// Descryption   : Table
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);
    return EXIT_SUCCESS;
}