////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : It is used to display the first N even numbers
// Input         : Integer
// Output        : Displays even numbers from 2 up to 2 times the given input
// Author        : Sakshi Sandip Kamthe
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo * 2; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
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