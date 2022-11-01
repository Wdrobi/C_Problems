/*Write a C program to enter length in centimeter and convert
it into meter and kilometer.*/

#include <stdio.h>
int main()
{
    float length, kilometer;
    printf("Enter the length in centimeter: ");

    // Take the length from the user
    scanf("%f", &length);

    // calculate the length in kilometer
    kilometer = length / 100000.0;

    // print the value of length in kilometer
    printf("The length in kilometer is %.2f\n", kilometer);

    return 0;
}