
////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : It is used to convert distance from kilometers to meters
// Input         : Integer
// Output        : Distance in meters
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iArea = 0.0;

    iArea = iNo * 1000;
    
    return iArea;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter is %d",iRet);

    return EXIT_SUCCESS;
}