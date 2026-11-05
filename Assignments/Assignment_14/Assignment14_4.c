////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : It is used to calculate the sum of all non-factors of a given number
// Input         : Integer
// Output        : Sum of non-factors of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;  iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        { 
           iSum = iSum + iCnt;
        }    
    }
    printf("%d\t",iSum);             
}
    

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}