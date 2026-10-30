#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Descryption   : Convrt Into Word
// Date          : 30/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    switch(iNo)
    {
        case 0:
            printf("Zero");
            break;

        case 1:
            printf("One");
            break;

        case 2:
                printf("two");
                break;
        
        case 3:
                printf("three");
                break;
        
        case 4:
                printf("Four");
                break;

        case 5:
                printf("Five");
                break;

        case 6:
                printf("six");
                break;

        case 7:
                printf("Seven");
                break;

        case 8:
                printf("eight");
                break;

        case 9:
                printf("Nine");
                break;

        default:
            printf("Invalid Input");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Single Digit Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}