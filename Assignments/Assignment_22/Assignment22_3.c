////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display numbers in ascending order with star symbols
// Input         : Integer
// Output        : Displays numbers from 1 to the given input, separated by star symbols
// Author        : Sakshi Sandip Kamthe
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of Elements :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}