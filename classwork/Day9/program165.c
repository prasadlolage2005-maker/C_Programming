#include<stdio.h>
#include<stdlib.h>

void  DisplayoddEvenDigit(int iNo)
{
    int iDigit=0;


    if(iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit =iNo % 10;

        if(iDigit %2 == 0)
        {
            printf(" Even :%d\n",iDigit);
        }
        else 
        {
            printf(" odd :%d\n",iDigit);
        }
        iNo = iNo/10;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter Digit");
    scanf("%d",&iValue);

    DisplayoddEvenDigit(iValue);
    return EXIT_SUCCESS;
}