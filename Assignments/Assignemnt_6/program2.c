#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Input         : float,Integer
// Descryption   : Eligible for admission
// Date          : 22/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks > 60) && (iAge > 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks: ");
    scanf("%f", &fMarks);

    printf("Enter Age: ");
    scanf("%d", &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
