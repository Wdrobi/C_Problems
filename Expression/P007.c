/*Write a C program to enter temperature in Fahrenheit(°F) and
convert it into Celsius(°C).*/

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in fahrenheit: ");

    // Read the value of fahrenheit from the user
    scanf("%f", &fahrenheit);

    // Calculate the temperature in Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // print the value of celsius
    printf("The temperature in Celsius is %.2f\n", celsius);

    return 0;
}