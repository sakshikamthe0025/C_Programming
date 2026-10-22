
////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description   : It is used to check whether a person is eligible for voting based on age
// Input         : Integer
// Output        : Eligible, Not Eligible or Invalid
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for voting\n");
    }
    else if (iAge >= 0)
    {
        printf("Not Eligible for voting\n");
    } 
    else
    {
        printf("Invalid\n");
    }
}


int main()
{
    int iAge = 0;

    printf("Enter your Age : ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}