/* Write a C Program to input two float numbers as input and
display its sum [Follow the printing style num + num = sum].*/

#include <stdio.h>
int main()
{
    float number1, number2;
    printf("Enter two float number: ");

    // take float numbers from the user
    scanf("%f %f", &number1, &number2);

    // Print the numbers and their sum
    printf("%.2f + %.2f = %.2f", number1, number2, number1 + number2);

    return 0;
}