// Write a C program to find the average of n numbers using arrays.

#include <stdio.h>

int main()
{
    int length, array[100], sum = 0;
    float average;
    printf("Total number of elements: ");

    // take the length from the user
    scanf("%d", &length);

    printf("Enter the elements of the array: ");

    // Read the elements from the user
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    // calculate the average
    average = sum / (float)length;

    // print the average
    printf("The average of the numbers is %.2f\n", average);

    return 0;
}
