
////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : It is used to display odd numbers from 1 to iNo
// Input         : Integer
// Output        : Odd numbers from 1 to iNo
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}
    
int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return EXIT_SUCCESS;
}