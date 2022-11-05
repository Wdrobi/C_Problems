/*Write a C program to enter marks of five subjects and calculate
total and average marks.*/

#include <stdio.h>

int main()
{
    float subject1, subject2, subject3, subject4, subject5, total_mark, average_mark;
    printf("Enter the marks of five subjects: ");

    // Take the marks from the user
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    // Calculate the total marks
    total_mark = subject1 + subject2 + subject3 + subject4 + subject5;

    // calculate the average mark
    average_mark = total_mark / 5;

    // print the value of total and average
    printf("The total mark = %.2f\nThe average mark = %.2f\n", total_mark, average_mark);

    return 0;
}