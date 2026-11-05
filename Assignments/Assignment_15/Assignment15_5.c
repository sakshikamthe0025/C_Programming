////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description   : It is used to calculate the percentage of obtained marks
// Input         : Float, Float
// Output        : Percentage of obtained marks
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

float Percentage(float iNo1, float iNo2)
{
    float fPer = 0.0f;

    if((iNo1 > 0) && (iNo2 > 0)) 
    {
        fPer = (iNo2 * 100)/iNo1;
        return fPer;
    }
    return 0;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Number\n");
    scanf("%d",&iValue1);

    printf("Enter Obtained Number\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %.1f",fRet);

    return EXIT_SUCCESS;
}