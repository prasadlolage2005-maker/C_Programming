#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Input         : float,Integer
// Descryption   : calculate Employee Bonus
// Date          : 22/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYear)
{
    float fBonus=0.0f;

    if(iYear < 0)
    {
        printf("Years of Serive Can not be Negative\n");
    }
    else if(iYear > 10)
    {
        fBonus=(fSalary/100)*15;
        printf("%f",fBonus);
    }
    else if(iYear > 5 && iYear < 10)
    {
        fBonus=(fSalary/100)*10;
        printf("%f",fBonus);
    }
    else if(iYear < 5)
    {
        fBonus=(fSalary/100)*5;
        printf("%f",fBonus);
    }

}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{

    float fSalary = 0.0f;
    int iYear =0;

    printf("Enter Salary :\n");
    scanf("%f",&fSalary);

    printf("Enter Year Service :\n");
    scanf("%d",&iYear);

    CalculateBonus(fSalary,iYear);


    return EXIT_SUCCESS;
}