
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display numbers from -iNo to +iNo
// Input         : Integer
// Output        : Numbers from -iNo to +iNo
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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