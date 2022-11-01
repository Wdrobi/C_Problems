/*Write a C Program to Calculate Area of a Square, take length
of one side as user input.*/

#include <stdio.h>
int main()
{
    float length, area;
    printf("Enter the length of the Square: ");

    // Take the length from the user
    scanf("%f", &length);

    // calculate the Area of the Square
    area = length * length;

    // print the value of area
    printf("The Area of the Square is %.2f\n", area);

    return 0;
}