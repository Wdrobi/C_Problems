/* Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms*/

#include <stdio.h>

int main()
{
    int number,i;
    long int term=1, sum = 0;
    printf("Enter the number of terms: ");

    // Read the terms from the user
    scanf("%ld", &number);

    for (i = 1; i <= number; i++)
    {
        printf("%ld", term);

        if (i < number)
        {
            printf(" + ");
        }

        // calculate the sum
        sum += term;

        // calculate the terms
        term = (term * 10) + 1;
    }

    // print the value of sum
    printf(" = %ld", sum);

    return 0;
}
