// Write a C program to swap first and last digits of any number.

#include <stdio.h>
int main()
{
    int number, count = 0, temp, last_digit, remainder, divisor = 1, swap_number;
    printf("Enter a number: ");

    // Take the number from the user
    scanf("%d", &number);

    temp = number;

    // find the first digit
    while (temp)
    {
        remainder = temp % 10;
        count++;
        temp = temp / 10;
    }

    // find the last digit
    last_digit = number % 10;

    // find the divisor for a digit
    for (int i = 0; i < count - 1; i++)
    {
        divisor = divisor * 10;
    }
    // swap the first and last digit
    swap_number = last_digit * divisor + (number - last_digit + remainder) % divisor;

    // print the swap number
    printf("The number swaped 1st and last digit is %d\n", swap_number);

    return 0;
}
