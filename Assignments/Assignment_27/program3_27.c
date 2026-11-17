#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Input         : String
// Output        : Integer
// Descryption   : Diffrence Capital ans small charcter
// Date          : 10/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int Diffrence(char *str)
{
    int iCount = 0;
    int iCountCap = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }
    return iCountCap - iCountSmall;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char Arr[255];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet=Diffrence(Arr);
    printf("Count of Diffrence %d",iRet);

    return EXIT_SUCCESS;
}