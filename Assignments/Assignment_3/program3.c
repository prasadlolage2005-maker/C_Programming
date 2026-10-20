#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenfactors
// Input         : Integer
// Output        : Integer
// Descryption   : DisplayEvenfactors
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int i=0; 
    for(i=1; i<=iNo/2; i++)
    {
        if((iNo%i)==0 && (i%2)==0 )
        {
            printf("%d\t",i);
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

    DisplayEvenFactors(iValue);

    return  EXIT_SUCCESS;
}