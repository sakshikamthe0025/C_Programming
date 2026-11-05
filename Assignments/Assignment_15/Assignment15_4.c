////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description   : It is used to calculate the multiplication of three given numbers
// Input         : Integer, Integer, Integer
// Output        : Multiplication of three numbers
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;

    iMul = iNo1 * iNo2 * iNo3;
    return iMul; 
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter Three Number\n");
    scanf("%d %d %d",&iValue1, &iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is %d:",iRet);

    return EXIT_SUCCESS;
}