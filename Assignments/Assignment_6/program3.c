#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscont
// Input         : float
// Descryption   : Calculate Discount
// Date          : 22/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CalculateDiscount(float fNo)
{
    float fFinalAmount=0.0f;

    if(fNo < 1000)
    {
        printf("%f",fNo);
    }
    else if(fNo >=1000 && fNo < 5000)
    {
        fFinalAmount=(fNo-(fNo/100)*10);
        printf("payble Amount:%f",fFinalAmount);
    }
    else if(fNo >= 5000)
    {
        fFinalAmount=(fNo-(fNo/100)*20);
        printf("payble Amount:%f",fFinalAmount);
    }
    else
    {
        printf("Invalid \n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue=0.0f;

    printf("Enter Number\n");
    scanf("%f",&fValue);

    CalculateDiscount(fValue);

    return EXIT_SUCCESS;
}
