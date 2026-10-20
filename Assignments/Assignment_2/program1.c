#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Descryption   : print that number of * on screen 
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    int iCnt=1;
    while(iCnt<=iNo)
    {

        printf("* \n");
        iCnt++;
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
