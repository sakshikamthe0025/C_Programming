////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display even numbers in odd rows and odd numbers in even rows
// Input         : Integer, Integer
// Output        : Alternating even and odd number pattern
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
    int iAns1 = 0;
    int iAns2 = 0;
    
    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1; iNum2 <= iCol; iNum2++)
        {
            if(iNum1 % 2 == 0)
            {
                iAns2 = (iNum2  * 2) - 1;
                printf("%d\t",iAns2);
                   
            }
            else
            {
                iAns1 = iNum2 * 2;
                printf("%d\t",iAns1);        
            }
            
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