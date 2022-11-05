/*Write a C program to enter temperature in °Celsius and convert
it into °Fahrenheit.*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");

    // Take the temperature in Celsius from the user
    scanf("%f", &celsius);

    // Calculate temperature in Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // print the value of fahreheit
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);

    return 0;
}