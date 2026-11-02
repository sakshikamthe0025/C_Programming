
////////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Description   : It is used to calculate the product of even factors from 1 to a given number
// Input         : Integer
// Output        : Even Factorial of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iFact = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is %d",iRet);

    return EXIT_SUCCESS;
}