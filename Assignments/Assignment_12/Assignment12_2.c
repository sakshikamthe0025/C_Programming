////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description   : It is used to check whether a given number contains zero or not
// Input         : Integer
// Output        : TRUE if the number contains zero, otherwise FALSE
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo == 0)
    {
        return TRUE;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        

        if(iDigit == 0)
        {
            return TRUE;
        }
    }
    
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return EXIT_SUCCESS;
}