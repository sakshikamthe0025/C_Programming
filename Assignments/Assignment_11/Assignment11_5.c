////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : It is used to display numbers in reverse order within a given range
// Input         : Integer, Integer
// Output        : Numbers from ending point to starting point
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iAns = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    
    for(iAns = iEnd; iAns >= iStart; iAns--)
    {
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}