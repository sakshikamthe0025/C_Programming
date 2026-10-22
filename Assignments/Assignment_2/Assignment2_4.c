
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display a number as per the given frequency
// Input         : Integer, Integer
// Output        : None
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iNum = 0;
    
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    
    for(iNum = 0; iNum < iFrequency; iNum++)
    {
        printf("%d\n",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

   Display(iValue,iCount);

    return EXIT_SUCCESS;
}