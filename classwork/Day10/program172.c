#include<stdio.h>
#include<stdlib.h>

int  CountDigit(int iNo)
{
    int iDigit=0;
    int iCount = 0;


    if(iNo < 0)
    {
        iNo=-iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo % 10;
        iCount++;
        iNo = iNo/10;
    }
    return iCount;
}

int  SumDigit(int iNo)
{
    int iDigit=0;
    int iSum = 0;


    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit =iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;

    }
    return iSum;

}

float AvgDigit(int iNo)
{
    int iDigit =0;
    int iSum =0;
    int iCount =0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    iSum = SumDigit(iNo);
    iCount = CountDigit(iNo);
    fAvg = (float)iCount/(float)iSum;
    return fAvg;
}

int main()
{
    int iValue = 0;
    float fRet =0.0f;

    printf("Enter Digit : ");
    scanf("%d",&iValue);

    fRet=AvgDigit(iValue);

    printf("Average of digit : %.2f",fRet);
    return EXIT_SUCCESS;
}