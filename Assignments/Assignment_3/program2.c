#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Displayfactors
// Input         : Integer
// Descryption   : print even factors of that number
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Displayfactors(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1; i<=iNo/2; i++) 
    {
        if(i%2==0)
        {
            if(iNo%i==0)
            printf("%d\n",i);
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

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Displayfactors(iValue);



    return EXIT_SUCCESS;
}