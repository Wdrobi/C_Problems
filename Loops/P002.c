// Write a C program to print all even number 1 to 100

#include <stdio.h>

int main()
{
    int number = 100;
    printf("All even numbers 1 to 100 are: \n");

    for (int i = 2; i <= number; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}