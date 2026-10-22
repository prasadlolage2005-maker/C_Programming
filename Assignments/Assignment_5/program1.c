#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : findGreatest
// Input         : Integer,Integer,Integer
// Descryption   : Find gretest Number from 3 Numbers
// Date          : 21/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void findGreatest(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        printf("%d",iNo1);
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("%d",iNo2);
    }
    else
    {
        printf("%d",iNo3);
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0,iValue3=0;
    
    printf("Enter First Number\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number\n");
    scanf("%d",&iValue3);

    findGreatest(iValue1,iValue2,iValue3);


    return EXIT_SUCCESS;
}
