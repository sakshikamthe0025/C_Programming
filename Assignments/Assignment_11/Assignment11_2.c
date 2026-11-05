////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Description   : It is used to display even numbers within a given range
// Input         : Integer, Integer
// Output        : Even numbers from starting point to ending point
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iAns = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    
    for(iAns = iStart; iAns <= iEnd; iAns++)
    {
        if(iAns % 2 == 0)
        {
            printf("%d\t",iAns);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}