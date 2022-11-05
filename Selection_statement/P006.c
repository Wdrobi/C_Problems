/*Write a C program to input angles of a triangle and check
whether triangle is valid or not.*/

#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum_of_angles;
    printf("Enter three angles of a triangle: ");

    // read the angles from the user
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // calculate the sum of angles
    sum_of_angles = angle1 + angle2 + angle3;

    // check the triangle is valid or not
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && sum_of_angles == 180)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }

    return 0;
}