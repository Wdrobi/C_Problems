// Write a C program to find the largest element of an multidimensional array
#include <stdio.h>
int main()
{
    int size, largest;
    printf("Enter the size of Array: ");
    scanf("%d", &size);
    int array[size][size];
    printf("Enter the element of array: \n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    largest = array[0][0];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i][j] > largest)
            {
                largest = array[i][j];
            }
        }
        printf("\n");
    }
    printf("The largest element is %d", largest);
    return 0;
}
