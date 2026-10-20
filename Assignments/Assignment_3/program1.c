// EX
// Input 7
// Output 2 4 6 8 10 12 14

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Input         : Integer
// Descryption   : print that number of even numbers on screen 
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo<0)
    {
        return;
    }
    
    int iCnt=0;
    for(iCnt=1; iCnt<=(iNo*2); iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
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

    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);



    return EXIT_SUCCESS;
}

