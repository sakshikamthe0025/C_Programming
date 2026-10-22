
////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : It is used to check whether a number is positive, negative or zero
// Input         : Integer
// Output        : Positive, Negative or Zero
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("The given number is positive\n");
    }
    else if(iValue < 0)
    {
        printf("The given number is negative\n");
    }
    else
    {
        printf("The given number is zero\n");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}