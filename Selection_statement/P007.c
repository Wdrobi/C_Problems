/*Write a C program to input all sides of a triangle and check
whether triangle is valid or not*/

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the value of three sides of a triangle: ");

    // Take the value of sides from the user
    scanf("%d %d %d", &side1, &side2, &side3);

    // test the triangle is valid or not
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }

    return 0;
}