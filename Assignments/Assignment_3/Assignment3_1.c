
////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : It is used to display even numbers starting from 0
// Input         : Integer
// Output        : Even numbers
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iEven = 0;
    int iCnt = 0;
    
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iEven);
        iEven = iEven + 2;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}