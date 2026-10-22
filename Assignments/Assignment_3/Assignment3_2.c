
////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactors
// Description   : It is used to display the factors of a given number
// Input         : Integer
// Output        : Factors of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\n", i);
        }
    }

}

int main()
{
    int iValue = 0;
    

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}
