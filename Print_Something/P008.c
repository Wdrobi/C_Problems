/*Write a C Program to input two numbers as input and display
its product.*/

#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter two number: ");

    // take the number from user
    scanf("%d %d", &number1, &number2);

    // print the multiplication of the numbers
    printf("The product = %d", number1 * number2);

    return 0;
}