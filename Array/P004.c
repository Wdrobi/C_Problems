/*Write a program in C to read n number of values in an array and display it in reverse order.*/

#include <stdio.h>

int main()
{
    int length, array[100], i;
    printf("Total number of elements: ");

    // Take the total number of element from the user
    scanf("%d", &length);

    printf("Enter the elements: ");

    // Take the elements from the user
    for (i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    // print the reverse order
    printf("Reverse of the elements:\n");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
