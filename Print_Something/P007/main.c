/*Write a C Program to input two numbers as input and display
its sum.*/

#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two number: ");

    // Read the numbers from user
    scanf("%d %d", &number1, &number2);

    // Print the sum of the numbers
    printf("The sum = %d", number1 + number2);

    return 0;
}