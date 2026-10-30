#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Descryption   : Print Number
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
       printf("%d\t",iCnt); 
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

    Display(iValue);
    return EXIT_SUCCESS;
}
