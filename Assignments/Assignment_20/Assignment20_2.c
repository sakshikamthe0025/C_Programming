////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display stars, hash symbols and @ symbols in a specific pattern
// Input         : Integer, Integer
// Output        : Displays a pattern with a hash diagonal, stars above it and @ symbols below it
// Author        : Sakshi Sandip Kamthe
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int iNum1 = 0, iNum2 = 0;

    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1; iNum2 <= iCol; iNum2++)
        {
            if((iNum1 + iNum2) == (iCol + 1))
            {
                printf("#\t");
            }
            else if((iNum1 + iNum2) <= iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d", &iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}