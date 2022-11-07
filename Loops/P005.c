// Write a C program to find sum of first and last digit of any number.

#include <stdio.h>

int main()
{
    int number, last_digit, digit;
    printf("Enter a number: ");

    // Take the number from the user
    scanf("%d", &number);

    // identify the digits and calculate the sum

    last_digit = number % 10;
    while (number >= 10)
    {
        digit = number % 10;
        number /= 10;
    }
    printf("The sum of 1st and last digit is %d", number + last_digit);

    return 0;
}