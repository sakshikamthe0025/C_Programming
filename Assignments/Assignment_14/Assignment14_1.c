////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : It is used to calculate the multiplication of all factors of a given number, excluding the number itself
// Input         : Integer
// Output        : Multiplication of factors
// Author        : Sakshi Sandip Kamthe
// Date          : 05/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAns = iAns * iCnt;
        }
       
    }  
    return iAns;
}
    

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}