
////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Description   : It is used to check whether a number is divisible by 3, 5 or both
// Input         : Integer
// Output        : Divisible by Both, Divisible by 3 only, Divisible by 5 only or Neither
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by Both \n");
    }
    else if(((iValue % 3) == 0))
    {
        printf("Divisible by 3 only\n");
    }
    else if(((iValue % 5) == 0))
    {
        printf("Divisible by 5 only\n");
    }
    else
    {
        printf("Not Divisible by Neither\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}