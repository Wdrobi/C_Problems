/*Write a C program to check whether a number is divisible by
5 and 11 or not.*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");

    // Read the number from the user
    scanf("%d", &number);

    // check the number is divisible by 5 and 11 or not
    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("The number is divisible by 5 and 11\n");
    }
    else
    {
        printf("The number is not divisible by 5 and 11\n");
    }

    return 0;
}