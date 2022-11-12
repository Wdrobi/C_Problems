// Write a C program to find the largest element of an 1D array.

#include <stdio.h>

int main()
{
    int length, array[100], i, large;
    printf("Total number of elements: ");

    // Read the length of array from the array
    scanf("%d", &length);

    printf("Enter the elements of the array: ");

    // Take the elements from the user
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    // store large number to array[0]
    large = array[0];

    // find the largest element
    for (i = 1; i < length; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
        }
    }
    printf("The largest elements is %d\n", large);

    return 0;
}
