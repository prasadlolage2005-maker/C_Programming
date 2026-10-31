#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Input         : float
// Output        : double
// Descryption   : Area of Circle
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

double CircleArea(float fNo)
{
    float fArea=0;

    fArea = (3.14*fNo*fNo);
    return fArea;
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

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of Circle is : %lf ",dRet);

    return EXIT_SUCCESS;
}
