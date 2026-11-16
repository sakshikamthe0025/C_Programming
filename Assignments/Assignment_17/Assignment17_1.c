////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display consecutive numbers from 1 to 9 repeatedly in a pattern
// Input         : Integer, Integer
// Output        : Repeating number pattern from 1 to 9
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
    int iNo = 0;

    for(iNum1 = 1, iNo = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1; iNum2 <= iCol; iNum2++,iNo++)
        {
            if(iNo > 9)
            {
              iNo = 1;    
            }
            printf("%d\t",iNo) ;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}