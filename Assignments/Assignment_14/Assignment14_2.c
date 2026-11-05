////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : It is used to display all factors of a given number in descending order, excluding the number itself
// Input         : Integer
// Output        : Factors of the given number in reverse order
// Author        : Sakshi Sandip Kamthe
// Date          : 06/11/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo/2;  iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}