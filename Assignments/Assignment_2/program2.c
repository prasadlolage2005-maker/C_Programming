#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : Integer
// Descryption   : print * 
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    while(iNo>0)             
    {
        printf("*\n");
        iNo--;
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

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;

}