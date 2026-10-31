#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Fhtocs
// Input         : Float
// Output        : double
// Descryption   : convert Fh to Cs
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

double Fhtocs(float fNo)
{
    float fTemp = 0.0;

    fTemp = (fNo-32) * 5/9;
    return fTemp;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Ferinhiht\n");
    scanf("%f",&fValue);
    
    dRet = Fhtocs(fValue);
    printf("%lf",dRet);

    return EXIT_SUCCESS;
}