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

int main()
{
    int iValue = 0, iSum =0, iCount=0;
    float fAvg =0.0f;

    printf("Enter Digit : ");
    scanf("%d",&iValue);

    iSum = SumDigit(iValue);
    iCount = CountDigit(iValue);

    fAvg = (float)iSum / (float)iCount;

    printf("Counts of digits : %d\n",iCount);
    printf("Summation of digits : %d\n",iSum);
    printf("Average of digit : %.2f",fAvg);

    return EXIT_SUCCESS;
}