#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer,Integer
// Descryption   : Accept two numbers from users and display first number in second number of times
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Display(int iNo,int ifrequency)
{
    int i=0;
    
    for(i=1; i<=ifrequency; i++)
    {
        printf("%d\t",iNo);
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
    int iCnt=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCnt);

    Display(iValue,iCnt);


    return EXIT_SUCCESS;
}