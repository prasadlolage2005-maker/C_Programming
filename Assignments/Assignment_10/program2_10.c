#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Input         : Integer
// Output        : Double
// Descryption   : Area of Rectangle
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

double RectArea(float fNo1,float fNo2)
{
    float fArea = 0.0f;

    fArea=fNo1*fNo2;
    return fArea;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width of Rectangle\n");
    scanf("%f",&fValue1);

    printf("Enter height of Rectangle\n");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of Rectangle %lf",dRet);

    return EXIT_SUCCESS;
}