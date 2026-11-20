#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main()
{
    char Arr[20] = "Ganesh Pune";

    printf("%s\n",Arr);
    printf("Size of Array : %d\n",sizeof(Arr));
    printf("Length of String : %d\n",strlen(Arr));
    return EXIT_SUCCESS;
}