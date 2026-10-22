
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display numbers from 5 to 1
// Input         : None
// Output        : 5 4 3 2 1
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iNo = 0;

    iNo = 5;
    while(iNo >= 1)
    {
        printf("%d",iNo);
        iNo--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}