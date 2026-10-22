#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Input         : Character
// Descryption   : Identify Character Type
// Date          : 21/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        printf("UPPERCASE CHARCTER\n");
    }
    else if(cValue>='a' && cValue<='z')
    {
        printf("LOWERCASE CHARCTER\n"); 
    }
    else if(cValue>='0' && cValue<='9')
    {
        printf("Digits\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue='\0';

    printf("Enter a Charcter\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);
    return EXIT_SUCCESS;
}