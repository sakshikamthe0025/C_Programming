////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display lowercase alphabets in odd rows and numbers in even rows
// Input         : Integer, Integer
// Output        : Alternating alphabet and number pattern
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
    char ch = '\0';
    int iCnt = 0;

    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1, iCnt = 1, ch = 'a'; iNum2 <= iCol; iNum2++, ch++, iCnt++)
        {
            if(iNum1 % 2 == 0)
            {
               printf("%d\t",iCnt);
            }
            else
            {
                printf("%c\t",ch);
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