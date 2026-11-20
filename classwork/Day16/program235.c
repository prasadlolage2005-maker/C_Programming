#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    //scanf("%[^'\n']s",Arr);
    fgets(Arr,stdinsizeof(Arr),stdin);

    printf("Entered String is : %s\n",Arr);
    return EXIT_SUCCESS;
}