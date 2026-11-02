
////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : It is used to convert area from square feet to square meters
// Input         : Integer
// Output        : Area in square meters
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = iNo * 0.0929;
    
    return dAns;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Meter is %lf",dRet);

    return EXIT_SUCCESS;
}