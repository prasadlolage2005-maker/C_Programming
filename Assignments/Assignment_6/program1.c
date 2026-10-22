#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElecticityBill
// Input         : float
// Descryption   : Calcuate electricity bill
// Date          : 22/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CalculateElecticityBill(float fUnits)
{

    float fNo=0;

    if(fUnits < 0)
    {
        printf("Negative Unit consumption is Invalid\n");
    }
    else if(fUnits>=1 &&  fUnits<=100 )
    {
        fNo = fUnits * 5;
        printf("%f",fNo);
    }
    else if(fUnits >=101 && fUnits<=200)
    {
        fNo= (100 * 5) + ((fUnits - 100) * 7);
        printf("%f",fNo);
    }
    else if(fUnits > 200)
    {
        fNo = (100 * 5) + (100 * 7) + ((fUnits - 200) * 10);
        printf("%f",fNo);
    }
    else
    {
        printf("invalid Input\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    float fUnits=0.0f;

    printf("Enter Consumed Units\n");
    scanf("%f",&fUnits);

    CalculateElecticityBill(fUnits);

    return EXIT_SUCCESS;
}
