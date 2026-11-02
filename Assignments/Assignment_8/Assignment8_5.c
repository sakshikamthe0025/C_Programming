
////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : It is used to display the multiplication table in reverse order from 10 to 1
// Input         : Integer
// Output        : Reverse multiplication table
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt > 0; iCnt--)
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

    TableRev(iValue);
    return EXIT_SUCCESS;
}