/*Write a program in C to count a total number of duplicate elements in an array.*/

#include <stdio.h>

int main()
{
    int i, ElementsNumber, array[100], count = 0;
    printf("Enter the number of elements: ");

    // read the total number of elements from the user
    scanf("%d", &ElementsNumber);
    printf("Enter the elements: ");

    // assigning the elements
    for (i = 0; i < ElementsNumber; i++)
    {
        scanf("%d", &array[i]);
    }

    // count the duplicate numbers
    for (i = 0; i < ElementsNumber; i++)
    {
        for (int j = i + 1; j < ElementsNumber; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                break;
            }
        }
    }

    // print the value of count
    printf("Total number of duplicate elements is: %d", count);

    return 0;
}
