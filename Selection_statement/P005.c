// Write a C program to input week number and print week day.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the week number: ");

    // take the number from the user
    scanf("%d", &number);

    // calculate the day for the number
    if (number == 1)
    {
        printf("The day is Satarday\n");
    }
    else if (number == 2)
    {
        printf("The day is Sunday\n");
    }
    else if (number == 3)
    {
        printf("The day is Monday\n");
    }
    else if (number == 4)
    {
        printf("The day is Tuesday\n");
    }
    else if (number == 5)
    {
        printf("The day is Wednessday\n");
    }
    else if (number == 6)
    {
        printf("The day is Thursday\n");
    }
    else if (number == 7)
    {
        printf("The day is Friday\n");
    }
    else
    {
        printf("You entered a Wrong number!\n");
    }

    return 0;
}
