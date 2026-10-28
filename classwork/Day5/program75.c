// Input =4
// Ouput 4321

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
         printf("%d\t",iCnt);
         //printf("*\t");
    }
            printf("\n");
}

int main()
{
    int iValue=0;
    printf("Enter The Frequency\n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}