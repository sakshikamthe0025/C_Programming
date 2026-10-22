
////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description   : It is used to find the greater number between two numbers
// Input         : Integer, Integer
// Output        : Greater number or both numbers are equal
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("The greater number is : %d\n",iFirst);
    }
    else if (iSecond > iFirst)
    {
        printf("The greater number is : %d\n",iSecond);
    } 
    else
    {
        printf("Both Numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}