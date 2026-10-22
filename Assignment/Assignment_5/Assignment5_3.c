
////////////////////////////////////////////////////////////
//
// Function Name : DisplayGrade
// Description   : It is used to display the grade based on the marks obtained
// Input         : Float
// Output        : Grade A, B, C, D, Fail or Invalid Marks
// Author        : Sakshi Sandip Kamthe
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks <= 100) && (fMarks >= 90))
    {
        printf("A\n");
    }
    else if((fMarks <= 89) && (fMarks >= 75))
    {
        printf("B\n");
    } 
    else if((fMarks <= 74) && (fMarks >= 60))
    {
        printf("C\n");
    } 
    else if((fMarks <= 59) && (fMarks >= 40))
    {
        printf("D\n");
    } 
    else if((fMarks <= 39) && (fMarks >= 0))
    {
        printf("Fail\n");
    } 
    else
    {
        printf("Invalid Marks\n");
    }
}


int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}