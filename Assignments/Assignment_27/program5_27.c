#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : ReverseString
// Input         : String
// Descryption   : reverse String
// Date          : 10/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void ReverseString(char *str)
{
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    while(iLength > 0)
    {
        printf("%c", str[iLength-1]);
        iLength--;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[255];

    printf("Enter String : \n");
    scanf("%[^'\n']", Arr);

    ReverseString(Arr);

    return EXIT_SUCCESS;
}