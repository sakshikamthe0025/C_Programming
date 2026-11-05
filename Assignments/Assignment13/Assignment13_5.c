////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : It is used to calculate the difference between the sum of even and odd digits
// Input         : Integer
// Output        : Difference between the sum of even digits and odd digits
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iCount1 = 0;
    int iCount2 = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit % 2 == 0)
        {
            iCount1++;
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iCount2++;
            iSum2 = iSum2 + iDigit;
        }
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
}
    

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

