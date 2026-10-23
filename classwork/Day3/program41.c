#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
// function Name : Max
// Description   : check Max and min
// input         : Integer Integer
// output        : Integer
// date          : 11-10-2026
// Author        : Prasad Nitin Lolage
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Max(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Maximum Number is : %d\n",iNo1);
    }
    else
    {
        printf("Minimum is :%d\n",iNo2);
    }
}
int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    iResult=Max(iValue1,iValue2);

    return EXIT_SUCCESS;
}
