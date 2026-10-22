
////////////////////////////////////////////////////////////
//
// Function Name : FindGreatest
// Description   : It is used to find the greatest number among three numbers
// Input         : Integer, Integer, Integer
// Output        : Greatest number
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("The greatest number is : %d\n",iFirst);
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("The greatest number is : %d\n",iSecond);
    } 
    else
    {
        printf("The greatest number is : %d\n",iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    printf("Enter third number :\n");
    scanf("%d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}