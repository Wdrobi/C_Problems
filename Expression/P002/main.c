/*Write a C Program to Calculate Area and Circumference of
Circle.*/

#include <stdio.h>
#define pi 3.1416

int main()
{
    float radius, area, circumference;
    printf("Enter the Radius of the Circle: ");

    // Take Radius from the user
    scanf("%f", &radius);

    // calculate the Area of the circle
    area = pi * radius * radius;

    // calculate the circumference of the circle
    circumference = 2 * pi * radius;

    // Print the value of Area
    printf("The Area of Circle is %.2f\n", area);

    // print the circumference of the circle
    printf("The circumference of the circle is %.2f\n", circumference);

    return 0;
}