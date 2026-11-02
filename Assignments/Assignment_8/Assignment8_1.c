
////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : It is used to display whether a number is Small, Medium or Large
// Input         : Integer
// Output        : Small, Medium or Large
// Author        : Sakshi Sandip Kamthe
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);
    return EXIT_SUCCESS;
}