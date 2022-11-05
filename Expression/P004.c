/*Write a C Program to Calculate Area of a Rectangle, take
height and width as user input.*/

#include <stdio.h>
int main()
{
    float height, width, area;
    printf("Enter the Height and Width of Ractangle: ");

    // Read the height and width from the user
    scanf("%f %f", &height, &width);

    // calculate the Area of the Ractangle
    area = height * width;

    // print the value of area
    printf("The Area of the Ractangle is %.2f\n", area);

    return 0;
}