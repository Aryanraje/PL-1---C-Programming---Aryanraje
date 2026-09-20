/*
Program(1) -> write a program to make use of basic
input/output functions using different data types
Solution (1) -> Redefined Values
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

    printf("-------student information-------\n");
    printf("\n Rollnumber :%d", rollnum);
    printf("\n Percentage :%f", per);
    printf("\n Grade :%c", grade);

    return 0;
}
