// Write a C program to find sum of the digits of any number.

#include <stdio.h>

int main()
{
    int number, digit, sum = 0;
    printf("Enter a number: ");

    // Take the number from the user
    scanf("%d", &number);

    // find the digits and calculate their sum
    while (number >= 10)
    {

        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    sum += number;

    // print the value of sum
    printf("The sum of digits is %d\n", sum);

    return 0;
}