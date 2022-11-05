// Write a C program to check whether a number is even or odd.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");

    // take the number from the user
    scanf("%d", &number);

    // check whether it is even or odd
    if (number % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}