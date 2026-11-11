#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt=0;
    bool bFlag=false;
    
    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;     
            break;                      
        }
    }
    return bFlag;
}

int main(void)
{
    int iValue=0;
    bool bRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet)
    {
        printf("It is A prime Number\n");
    }
    else
    {
        printf("It is Not prime Number\n");
    }
    return EXIT_SUCCESS;
}