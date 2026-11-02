
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display '*' and '#' patterns iNo times
// Input         : Integer
// Output        : Pattern of '*' followed by '#'
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("*\t");
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("#\t");
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}