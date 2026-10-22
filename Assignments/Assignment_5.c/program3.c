#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayGrade
// Input         : float
// Descryption   : Display Grade
// Date          : 21/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void DisplayGrade(float fNo)
{
    if(fNo >= 90 && fNo <= 100)
    {
        printf(" Grade A\n");
    }
    else if(fNo >= 75 && fNo <= 89)
    {
        printf("Grade B\n");
    }
    else if(fNo >= 60 && fNo <= 74)
    {
        printf("Grade C\n");
    }
    else if(fNo >= 40 && fNo <= 59)
    {
        printf("Grade D\n");
    }
    else if(fNo < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
    
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue=0.0f;

    printf("Enter Number\n");
    scanf("%f",&fValue);

    DisplayGrade(fValue);
    return EXIT_SUCCESS;
}