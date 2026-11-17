#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Input         : String
// Output        : Integer
// Descryption   : Count Small Charcter in string
// Date          : 10/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet=CountSmall(Arr);
    printf("Count of Small Character is : %d",iRet);

    return EXIT_SUCCESS;
}