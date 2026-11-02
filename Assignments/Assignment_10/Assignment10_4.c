
////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description   : It is used to convert temperature from Fahrenheit to Celsius
// Input         : Float
// Output        : Temperature in Celsius
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCel = 0.0;

    dCel = ((fTemp - 32)*(5.0/9.0));
    
    return dCel;
    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius is %lf",dRet);

    return EXIT_SUCCESS;
}