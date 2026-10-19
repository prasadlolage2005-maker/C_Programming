#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    
    if((iNo%2)==0)
    {
       return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue=0;
    bool bRet = false;

    printf("Enter Number to check Whether is Even or odd\n");
    scanf("%d",&ivalue);

    bRet=CheckEven(ivalue);

    if(bRet==true)
    {
        printf("It is even\n");
    }
    else
    {
        printf("it is odd\n");
    }


    return EXIT_SUCCESS;
}