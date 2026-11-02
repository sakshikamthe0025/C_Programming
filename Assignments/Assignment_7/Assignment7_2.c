
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display numbers from 1 to iNo
// Input         : Integer
// Output        : Numbers from 1 to iNo
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}