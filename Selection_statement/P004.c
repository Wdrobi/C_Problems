// Write a C program to check whether a year is leap year or not.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");

    // Read the year from the user
    scanf("%d", &year);

    // check it is leap year or not
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("This is a leap year\n");
    }
    else
    {
        printf("This is not a leap year\n");
    }

    return 0;
}