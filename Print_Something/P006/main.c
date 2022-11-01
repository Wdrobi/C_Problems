/*Write a C program to input two numbers and display those
numbers.*/

#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter two number: ");

    // Read the numbers
    scanf("%d %d", &number1, &number2);

    // print the numbers
    printf("%d %d", number1, number2);

    return 0;
}