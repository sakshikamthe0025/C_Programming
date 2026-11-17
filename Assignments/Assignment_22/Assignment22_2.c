////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display numbers in descending order with hash symbols
// Input         : Integer
// Output        : Displays numbers from the given input down to 1, separated by hash symbols
// Author        : Sakshi Sandip Kamthe
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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