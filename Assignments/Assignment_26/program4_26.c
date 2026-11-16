#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : chkSpecial
// Input         : Charcter
// Descryption   : Check charcter is special or Not
// Date          : 9/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////

bool chkSpecial(char ch)
{
    if((ch >= 33 && ch <= 47) ||
    (ch >= 58 && ch <= 64) ||
    (ch >= 91 && ch <= 96) ||
    (ch >= 123 && ch <= 126))
    {
        return true;
    }  
    else 
    {
        return false;
    }  
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet=chkSpecial(cValue);

    if(bRet == true)
    {
        printf("it is special Character \n");
    }
    else
    {   
        printf("it is not a Special Charcter\n");
    }
    return EXIT_SUCCESS;
}