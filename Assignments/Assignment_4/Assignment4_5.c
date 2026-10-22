
////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Description   : It is used to check whether a number is divisible by 5
// Input         : Integer
// Output        : Divisible by 5 or Not Divisible by 5
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("The number is divisible by 5 \n");
    }
    else
    {
        printf("The number is not divisible by 5 \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}