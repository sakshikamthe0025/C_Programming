
////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : It is used to display the first five multiples of a given number
// Input         : Integer
// Output        : First five multiples of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iResult = iCnt * iNo;
        printf("%d\t",iResult);
    }
    printf("\n");
}
    
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}