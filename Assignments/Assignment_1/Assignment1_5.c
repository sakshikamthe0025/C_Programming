
////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : It is used to display '*' iNo times
// Input         : Integer
// Output        : None
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }
}


int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}

