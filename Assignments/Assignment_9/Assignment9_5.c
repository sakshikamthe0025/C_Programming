
////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : It is used to calculate the difference between even and odd factorials
// Input         : Integer
// Output        : Difference between Even and Odd Factorials
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iFact1 = 0;
    int iFact2 = 0;
    int iCnt = 0;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact1 = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }

    for(iCnt = 1, iFact2 = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact2 = iFact2 * iCnt;
        }    
    }

    iResult = iFact1 - iFact2;
  
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return EXIT_SUCCESS;
}