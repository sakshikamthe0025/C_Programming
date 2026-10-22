
////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Description   : It is used to calculate bonus based on salary and years of service
// Input         : Float, Integer
// Output        : Bonus Amount
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears < 0)
    {
        printf("Invalid\n");
        return;
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
    }
    else if((iYears <= 10) && (iYears >= 5))
    {
        fBonus = fSalary * 10 / 100;
    }
    else if(iYears < 5)
    {
        fBonus = fSalary * 5 / 100;
    }
    if(fSalary >= 0)
    {
        printf("Bonus = %.2f\n", fBonus);
    }
}



int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
    
    printf("Enter Salary and years of service  :\n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}