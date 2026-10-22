
////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : It is used to convert lowercase to uppercase and uppercase to lowercase
// Input         : Character
// Output        : Converted character
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

char DisplayConvert(char CValue)
{
    if((CValue >= 'a' ) && (CValue <= 'z'))
    {
        printf("%c\n",CValue - 32);
    }
    else if((CValue >= 'A' ) && (CValue <= 'Z'))
    {
        printf("%c\n",CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Chracter : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}