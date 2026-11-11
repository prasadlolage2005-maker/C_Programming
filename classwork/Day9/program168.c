#include<stdio.h>
#include<stdlib.h>

float AvgDigit(int iNo)
{
    int iDigit=0;
    int iCount= 0;
    int iSum =0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo !=0 )
    {
        iDigit = iNo % 10;
        iSum = iSum+iDigit;
        
        iNo =iNo/10;
        iCount++;
    }
    return iSum/iCount;
}

int main()
{
    int iValue = 0;
    float fRet =0.0f;

    printf("Enter Digit : ");
    scanf("%d",&iValue);

    fRet=AvgDigit(iValue);

    printf("Average of digit : %f",fRet);
    return EXIT_SUCCESS;
}