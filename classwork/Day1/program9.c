#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :   Addition
// Input         :   Integer,Integer
// output        :   Integer
// Description   :   Performs Addition
// Date          :   04/10/2026
// Author        :   Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(
                int iNo1,       //First Number
                int iNo2        //Second Number
            )
{
   int iAns=0;
   iAns=iNo1+iNo2;              //Business Logic
   return iAns;  
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point of the Application
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1=0, ivalue2=0,iresult=0;

    printf("Enter First Number :\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number :\n");
    scanf("%d",&ivalue2);

    iresult=Addition(ivalue1,ivalue2);       

    printf("Addiition is:%d\n",iresult);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Test the Program
// 
// Tested Test Cases
//  ----------------------------
//  Input 1   Input 2  Output
//  ----------------------------
//  10          11       21
//  11          0        11
//  0           11       11
//  20         -9        11
// -9          20        11
// -20         -11      -31
//  ----------------------------
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
