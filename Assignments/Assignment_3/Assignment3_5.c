
////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : It is used to check whether a character is a vowel or not
// Input         : Character
// Output        : BOOL (TRUE or FALSE)
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVal)
{
    if(cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U' || cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Chracter : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is Not Vowel");
    }

    return EXIT_SUCCESS;
}