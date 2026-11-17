#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowels
// Input         : String
// Output        : Boolean
// Descryption   : Check vowels present in string or not
// Date          : 10/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

bool chkVowels(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' ||  *str == 'I' ||  *str == 'O' ||  *str == 'U' ||
            *str == 'a' ||  *str == 'e' ||  *str == 'i'||  *str == 'o'||  *str == 'u' )
            {
                return true;
            }
            str++;
    }
        return false;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////


int main()
{
    char Arr[255];
    bool bRet = false;

    printf("enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet=chkVowels(Arr);
    
    if(bRet==true)
    {
        printf("vowels is Presnt \n");
    }
    else
    {
        printf("Vowels is Not Present \n");
    }
    return EXIT_SUCCESS;
}