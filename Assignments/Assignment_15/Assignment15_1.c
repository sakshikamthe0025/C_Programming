////////////////////////////////////////////////////////////
//
// Function Name : main
// Description   : It is used to accept and display the full name of a user
// Input         : Character string
// Output        : Full name entered by the user
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please Enter full name :\n");
    scanf("%[^'\n']s",Name);
    printf("You are full name : %s",Name);

    return EXIT_SUCCESS;
}