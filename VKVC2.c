/*
Program (2) -> Write a program to make use of basic
Input/Output functions using different data types.

Solution (2) -> User defined values
*/

#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\nEnter student Roll Number: ");
    scanf("%d", &rollnum);

    printf("\nEnter student Percentage: ");
    scanf("%f", &per);

    printf("\nEnter student Grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Information -----");
    printf("\nRoll Number is: %d", rollnum);
    printf("\nPercentage is: %.2f", per);
    printf("\nGrade        : %c", grade);

    return 0;
}
