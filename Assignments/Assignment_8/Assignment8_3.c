
////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Description   : It is used to calculate the factorial of a given number
// Input         : Integer
// Output        : Factorial of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial Number is %d",iRet);

    return EXIT_SUCCESS;
}