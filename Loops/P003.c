// Write a C program to enter a number and print its digit in reverse order.

#include <stdio.h>

int main()
{
    int number, remainder, reverse = 0;
    printf("Enter a number: ");

    // read the number from the user
    scanf("%d", &number);

    // print the reverse
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    printf("The reverse number is %d\n", reverse);

    return 0;
}