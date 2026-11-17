#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Input         : String
// Output        : Integer
// Descryption   : Count Capital Charcter in string
// Date          : 10/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet=CountCapital(Arr);
    printf("Count of Capital Charcter is : %d",iRet);

    return EXIT_SUCCESS;
}
