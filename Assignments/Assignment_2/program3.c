#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Descryption   : if number is less than 10 then print "hello" otherwise print "Demo"
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{    
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}