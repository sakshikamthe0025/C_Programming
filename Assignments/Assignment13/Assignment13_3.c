////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : It is used to count the digits between 3 and 7 in a given number
// Input         : Integer
// Output        : Count of digits greater than 3 and less than 7
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit > 3) && (iDigit < 7))
        {
           iCount++;
        }
    }
    return iCount;
}
    

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}