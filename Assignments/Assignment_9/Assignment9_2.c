
////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : It is used to convert US Dollars into Indian Rupees
// Input         : Integer
// Output        : Amount in Indian Rupees
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iINR >= 0)
    {
        iINR = iNo * 70;
    }
    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR : %d",iRet);

    return EXIT_SUCCESS;
}