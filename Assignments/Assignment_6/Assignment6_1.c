
////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description   : It is used to calculate the electricity bill based on consumed units
// Input         : Integer
// Output        : Electricity Bill or Invalid Units
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Units\n");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }
    if(iUnits >= 0)
    {
        printf("Bill = %.2f\n", fBill);
    }
}



int main()
{
    int iUnits = 0;
    

    printf("Enter consumed units :\n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}