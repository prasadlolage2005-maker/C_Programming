#include "Header.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point of the Application
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1=0, ivalue2=0,iresult=0;

    printf("Enter First Number :\n");
    if(scanf("%d",&ivalue1)!=1)
    {
        fprintf(stderr,"Unable to Proced input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter Second Number :\n");
    if(scanf("%d",&ivalue2)!=1)
    {
        fprintf(stderr,"Unable to Proced input is invalid\n");

        return EXIT_FAILURE;
    }

    iresult=Addition(ivalue1,ivalue2);       

    printf("Addiition is:%d\n",iresult);

    return EXIT_SUCCESS;
}
