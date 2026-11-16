////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display positive numbers in odd rows and negative numbers in even rows
// Input         : Integer, Integer
// Output        : Alternating positive and negative number pattern
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
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1, iCnt1 = 1, iCnt2 = -1; iNum2 <= iCol; iNum2++, iCnt1++, iCnt2--)
        {
            if(iNum1 % 2 == 0)
            {
               printf("%d\t",iCnt2);
            }
            else
            {
                printf("%d\t",iCnt1);
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}