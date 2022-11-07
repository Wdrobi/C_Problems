// Write a C program to calculate product of digits of any number.

#include <stdio.h>

int main()
{
    int number, remainder, product = 1;
    printf("Enter a number: ");

    // Read the number from the user
    scanf("%d", &number);

    // find the digits of the number
    while (number > 10)
    {
        remainder = number % 10;
        product *= remainder;
        number /= 10;
    }

    // calculate the product of the digits
    product *= number;

    // print the product
    printf("The product of digits is %d\n", product);

    return 0;
}
