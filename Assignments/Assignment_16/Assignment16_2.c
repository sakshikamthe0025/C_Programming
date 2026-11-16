////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display uppercase alphabets in odd rows and lowercase alphabets in even rows
// Input         : Integer, Integer
// Output        : Alphabet pattern with alternating uppercase and lowercase rows
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
    char ch1 = '\0';
    char ch2 = '\0';

    for(iNum1 = 1; iNum1 <= iRow; iNum1++)
    {
        for(iNum2 = 1, ch1 = 'A',ch2 = 'a'; iNum2 <= iCol; iNum2++, ch1++, ch2++)
        {
            if(iNum1 % 2 == 0)
            {
               printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
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