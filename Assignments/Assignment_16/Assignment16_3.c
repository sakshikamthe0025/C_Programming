////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display an alphabet pattern where each row contains a repeated alphabet
// Input         : Integer, Integer
// Output        : Alphabet pattern with rows containing repeated alphabets
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

    for(iNum1 = 1, ch = 'A'; iNum1 <= iRow; iNum1++, ch++)
    {
        for(iNum2 = 1; iNum2 <= iCol; iNum2++)
        {
            printf("%c\t",ch);
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