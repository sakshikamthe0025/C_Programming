
////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Description   : It is used to check whether a character is uppercase, lowercase, digit or special character
// Input         : Character
// Output        : Uppercase Alphabet, Lowercase Alphabet, Digit or Special Character
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue > 'A') && (cValue < 'Z'))
    {
        printf("Uppercase Alphabet \n");
    }
    else if((cValue > 'a') && (cValue < 'z'))
    {
        printf("Lowercase Alphabet \n");
    }
    else if((cValue > '1') && (cValue < '9'))
    {
        printf("Digit \n");
    }
    else
    {
        printf("Special Chracter\n");
    }
}

int main(void)
{
    char cValue = '\0';

    printf("Enter the number : ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}