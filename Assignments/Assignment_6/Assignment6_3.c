
////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : It is used to calculate the final amount after applying a discount
// Input         : Float
// Output        : Final Bill Amount
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid\n");
    }
    else if(fAmount <= 999)
    {
        fFinalAmount = fAmount;
    }
    else if((fAmount >= 1000) && (fAmount <= 5000))
    {
        fDiscount = fAmount * 10 / 100;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
        fDiscount = fAmount * 20 / 100;
        fFinalAmount = fAmount - fDiscount;
    }
    if(fAmount >= 0)
    {
        printf("Bill = %.2f\n", fFinalAmount);
    }
}



int main()
{
    float fAmount = 0.0f;
    
    printf("Enter Purchase Amount  :\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}