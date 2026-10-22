
////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : It is used to check whether a number is even or odd
// Input         : Integer
// Output        : Even or Odd
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("The number is Even\n");
    }
    else
    {
        printf("The number is Odd\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}