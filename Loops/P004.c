// Write a C program to find frequency of each digit in a given integer.

#include <stdio.h>

int main()
{
    long long number;
    int remainder, digit, count = 0;
    printf("Enter a number: ");

    // Take the number from the user
    scanf("%lld", &number);
    printf("Enter the number you want to know the frequency: ");

    // Read the number from the user
    scanf("%d", &digit);

    // calculate the frequency of a digit
    while (number != 0)
    {
        remainder = number % 10;
        if (remainder == digit)
        {
            count++;
        }
        number /= 10;
    }

    // print the value of digit and count
    printf("The frequency of %d is %d", digit, count);

    return 0;
}