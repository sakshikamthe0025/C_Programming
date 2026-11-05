////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : It is used to display all non-factors of a given number
// Input         : Integer
// Output        : Non-factors of the given number
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;  iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
           printf("%d\t",iCnt);
        }    
    }       
}
    

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}