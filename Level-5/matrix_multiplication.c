#include <stdio.h>

int main()
{
    int rows1, columns1;
    printf("Enter the number of rows, columns for first matix : ");
    scanf("%d, %d", &rows1, &columns1);

    int rows2, columns2;
    printf("Enter the number of rows, columns for second matix : ");
    scanf("%d, %d", &rows2, &columns2);

    if (columns1 != rows2){
        printf("Multiplication not possible");
        return 1;
    }
    
    int matrix1[rows1][columns1];
    for (int i = 0; i < rows1; i++){
        for (int j = 0; j < columns1; j++)
        {
            printf("Enter the Element in (%i, %i) in matrix 1: ", i + 1, j + 1);
            scanf("%i", &matrix1[i][j]);
        }
    }

    int matrix2[rows2][columns2];
    for (int i = 0; i < rows2; i++){
        for (int j = 0; j < columns2; j++)
        {
            printf("Enter the Element in (%i, %i) in matrix 2: ", i + 1, j + 1);
            scanf("%i", &matrix2[i][j]);
        }
    }

    int result_matrix[rows1][columns2];
    for (int row = 0; row < rows1; row++){
        for (int column = 0; column < columns2; column++){
            int sum = 0;
            for (int k=0; k < rows2; k++){
                sum += matrix1[row][k] * matrix2[k][column];
            }
            result_matrix[row][column] = sum;
            printf("%i ", sum);
        }
        printf("\n");
    }

}