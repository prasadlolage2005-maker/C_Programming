#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Input         : Integer
// Descryption   : Pattern
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    
        for(iCnt = 1; iCnt>=iNo; iCnt--)
        {
            printf("$\t""*\t");
        }
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            printf("$\t""*\t");
        }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return EXIT_SUCCESS;
}
