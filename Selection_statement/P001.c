/*Write a C program to check whether a number is negative,
positive or zero.*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");

    // Take the number from the user
    scanf("%d", &number);

    // check the number wherther it is positive,negative or zero
    if (number > 0)
    {
        printf("The number is positive\n");
    }
    else if (number < 0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is zero\n");
    }

    return 0;
}