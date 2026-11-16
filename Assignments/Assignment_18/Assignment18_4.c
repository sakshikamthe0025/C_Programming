////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display a rectangular border of stars with @ symbols inside
// Input         : Integer, Integer
// Output        : Hollow rectangular pattern with stars on the border and @ symbols inside
// Author        : Sakshi Sandip Kamthe
// Date          : 17/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int iNum1 = 0;
    int iNum2 = 0;

    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1; iNum2 <= iCol; iNum2++)
        {
            if((iNum1 > 1) && (iNum1 < iRow) && (iNum2 > 1) && (iNum2 < iCol))
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows and columns:\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}