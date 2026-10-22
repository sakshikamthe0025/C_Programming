
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display "Marvellous" five times
// Input         : None
// Output        : None
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iNo = 0;
    for(iNo = 1; iNo <= 5; iNo++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}