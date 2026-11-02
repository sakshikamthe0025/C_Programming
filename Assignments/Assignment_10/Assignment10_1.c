
////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : It is used to calculate the area of a circle
// Input         : Float
// Output        : Area of the circle
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    if(fRadius != 0)
    {
       dArea = 3.14 * fRadius * fRadius;
    }
    return dArea;
    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is %lf",dRet);

    return EXIT_SUCCESS;
}