
////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : It is used to display the multiplication table of a given number up to 10
// Input         : Integer
// Output        : Multiplication table
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iResult = iNo * iCnt;
        printf("%d\t",iResult);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);
    return EXIT_SUCCESS;
}