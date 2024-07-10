#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter the number of rows, columns : ");
    scanf("%d, %d", &rows, &columns);

    int matrix[rows][columns];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the Element in (%i, %i) : ", i + 1, j + 1);
            scanf("%i", &matrix[i][j]);
        }
    }

    int transpose[columns][rows];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++)
        {
            printf("%i", transpose[i][j]);
            if (j != rows -1){
                printf(", ");
            }
        }
        printf("\n");
    }
}