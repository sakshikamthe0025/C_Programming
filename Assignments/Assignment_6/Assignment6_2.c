
////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Description   : It is used to check admission eligibility based on marks and age
// Input         : Float, Integer
// Output        : Eligible for Admission, Not Eligible or Invalid
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{

    if((fMarks >= 60) && (iAge >= 16))
    {
        printf("Eligible for Admission\n");
    }
    else if((fMarks >= 0) && (iAge >= 0))
    {
        printf("Not Eligible\n");
    }
    else
    {
        printf("Invalid\n");
    }

}

int main()
{
    
    float fMarks = 0.0f;
    int iAge = 0;
    

    printf("Enter Marks and Age :\n");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}