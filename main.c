#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swaper(int cols, int** array, int row1, int row2)
{
    int addelement;
    for (int i = 0; i < cols; i++)
    {
        addelement = array[row1][i];
        array[row1][i] = array[row2][i];
        array[row2][i] = addelement;
    }
    return;
}

int main()
{
    srand(time(0));
    int rows, cols;
    printf("Enter array size (rows and columns):");
    scanf("%d %d", &rows, &cols);
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
        array[i] = (int*)malloc(cols * sizeof(int));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand();
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    int row1, row2;
    printf("\nEnter number of swaping row(row1 row2):");
    scanf("%d %d", &row1, &row2);
    row1 -= 1;
    row2 -= 1;
    swaper(cols, array, row1, row2);
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    return 0;
}