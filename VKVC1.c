/*
Program (1) -> Write the program to make use of
basic Input/Output functions using different
data types.

Solution (1) -> Predefined values
*/

#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum = 55;
    per = 88.88;
    grade = 'A';

    printf("---Student Information---\n");
    printf("\nRoll Number : %d", rollnum);
    printf("\nPercentage : %.2f", per);
    printf("\nGrade : %c", grade);

    return 0;
}