#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckTriangle
// Input         : Integer,Integer,Integer
// Descryption   : CheckTriangle
// Date          : 22/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if( iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
        iSide1 + iSide2 > iSide3 &&
        iSide1 + iSide3 > iSide2 &&
        iSide2 + iSide3 > iSide1)
    {
        printf("triangle is valid\n");
    }
    else
    {
        printf("triangle is not valid\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    int iSide1=0 , iSide2=0 , iSide3=0;

    printf("Enter First side\n");
    scanf("%d",&iSide1);

    printf("Enter Second side\n");
    scanf("%d",&iSide2);

    printf("Enter Third side\n");
    scanf("%d",&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}