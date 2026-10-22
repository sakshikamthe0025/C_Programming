
////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : It is used to check whether a given year is a leap year or not
// Input         : Integer
// Output        : Leap year or Not a Leap year
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4) == 0)
    {
        printf("Leap year \n");
    }
    else
    {
        printf("not a Leap year \n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter a year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}