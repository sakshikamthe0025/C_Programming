////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display a number pattern where each element is the sum of its row and column positions minus one
// Input         : Integer, Integer
// Output        : Number pattern based on row and column positions
// Author        : Sakshi Sandip Kamthe
// Date          : 17/11/2026
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
            printf("%d\t", (iNum1 + iNum2) - 1 );
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