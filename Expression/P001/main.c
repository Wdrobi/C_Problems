/*Write a C program to enter two numbers and perform all arith-
metic operations.*/

#include <stdio.h>
int main()
{
    float number1, number2;
    printf("Enter two numbers: ");

    // Read the float numbers from the user
    scanf("%f %f", &number1, &number2);

    // Print their sum
    printf("The addition is %.2f\n", number1 + number2);

    // Print their substruction
    printf("The substruct is %.2f\n", number1 - number2);

    // Print their multiplication
    printf("The multiplication is %.2f\n", number1 * number2);

    // Print their divission
    printf("The division is %.2f\n", number1 / number2);

    return 0;
}