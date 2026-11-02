
////////////////////////////////////////////////////////////
//
// Function Name : OddFactorial
// Description   : It is used to calculate the product of odd numbers from 1 to a given number
// Input         : Integer
// Output        : Odd Factorial of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iFact = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is %d",iRet);

    return EXIT_SUCCESS;
}