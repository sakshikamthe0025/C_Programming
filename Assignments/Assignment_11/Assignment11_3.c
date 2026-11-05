////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Description   : It is used to calculate the sum of numbers within a given range
// Input         : Integer, Integer
// Output        : Sum of numbers from starting point to ending point
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeSum(int iStart, int iEnd)
{
    int iAns = 0;
    int iSum = 0;

    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return;
    }

    
    for(iAns = iStart; iAns <= iEnd; iAns++)
    {
        
        iSum = iSum + iAns; 
        
    }
    printf("%d\t",iSum);

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);

    return EXIT_SUCCESS;
}