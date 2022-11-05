/*Write a C program to check whether the triangle is equilateral,
isosceles or scalene triangle*/

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the value of three sides of a triangle: ");

    // read the value of sides from the user
    scanf("%d %d %d", &side1, &side2, &side3);

    // test the category of the triangle
    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is equilateral\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The triangle is isosceles\n");
    }
    else
    {
        printf("The triangle is scalene\n");
    }

    return 0;
}