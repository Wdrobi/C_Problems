// Write a program in C to find the maximum and minimum element in an array.

#include <stdio.h>
int max_value(int array[], int size)
{
    int max;
    max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int min_value(int array[], int size)
{
    int min;
    min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
int main()
{
    int size, max, min;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the Elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Maximum element: %d\nMinimum element: %d\n", max_value(array, size), min_value(array, size));
    return 0;
}
