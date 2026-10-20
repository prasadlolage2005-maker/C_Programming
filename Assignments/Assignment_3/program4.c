#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Input         : Charcter
// Descryption   : convert case of that character
// Date          : 19/10/2026
// Author        : Prasad Nitin Lolage
//
///////////////////////////////////////////////////////////////////
void DisplayConvert(char CValue)
{
   if(CValue>='a' && CValue<='z')
   {
    printf("%c",CValue-32);
   }
   else if (CValue>='A' && CValue<='Z')
   {
        printf("%c",CValue+32);
   }
   
}

int main()
{
    char cValue=0;

    printf("Enter Character\n ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}