////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display a square pattern with stars on and above the secondary diagonal and hashes below it
// Input         : Integer, Integer
// Output        : Square pattern of stars and hashes based on the secondary diagonal
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

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1; iNum2 <= iCol; iNum2++)
        {
            if(iNum1 +iNum2 > iCol + 1 )
            {
                printf("#\t");
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