#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckVowel
// Input         : Charcter
// Output        : Boolean
// Descryption   : check is vowel or not 
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

BOOL CheckVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || 
       CValue == 'i' || CValue == 'o' ||
       CValue == 'u' || CValue == 'A' ||
       CValue == 'E' || CValue == 'I' ||
       CValue == 'O' || CValue == 'U')
       {
        return TRUE;
       }
       else
       {
        return FALSE;
       }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue=0;
    BOOL bRet=0;

    printf("Enter character:\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==TRUE)
    {
        printf("chracter is vowel:");
    }
    else
    {
        printf("Charcter is not vowel:");
    }
    return EXIT_SUCCESS;
}