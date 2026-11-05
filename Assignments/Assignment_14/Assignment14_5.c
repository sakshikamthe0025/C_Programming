////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description   : It is used to calculate the difference between the sum of factors and non-factors of a given number
// Input         : Integer
// Output        : Difference between the sum of factors and non-factors
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iAns = 0;

    for(iCnt = 1;  iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        { 
           iSum1 = iSum1 + iCnt;
        } 
        
        if(iNo % iCnt != 0)
        { 
           iSum2 = iSum2 + iCnt;
        } 
    }
    iAns = iSum1 - iSum2;
    printf("%d\t",iAns);             
}
    

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    FactDiff(iValue);

    return EXIT_SUCCESS;
}