// Write a C Program to Find Transpose of a Matrix.

#include <stdio.h>
int main()
{
    int array[10][10], transpose[10][10], row, columm;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &columm);

    // asssigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < columm; ++j)
        {

            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }

    // print the entered matrix
    printf("\nEntered matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < columm; j++)
        {
            printf("%d  ", array[i][j]);
            if (j == columm - 1)
                printf("\n");
        }

    // computing the transpose
    for (int i = 0; i < row; i++)
        for (int j = 0; j < columm; j++)
        {
            transpose[j][i] = array[i][j];
        }

    // print the transpose matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < columm; i++)
        for (int j = 0; j < row; j++)
        {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }
    return 0;
}
