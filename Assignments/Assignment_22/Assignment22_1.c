////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display consecutive uppercase alphabets starting from A
// Input         : Integer
// Output        : Displays the specified number of consecutive uppercase alphabets
// Author        : Sakshi Sandip Kamthe
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    char ch = '\0';
    int iCnt = 0;

    for(ch = 'A', iCnt =1; iCnt <= iNo; ch++, iCnt++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of Elements :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}