#include <stdio.h>
#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Enter the elements of the matrix (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Columns of first matrix must equal rows of second matrix.\n");
        return;
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &row1, &col1);
    inputMatrix(matrix1, row1, col1);

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &row2, &col2);
    inputMatrix(matrix2, row2, col2);

    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, row1, col1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, row2, col2);

    if (row1 == row2 && col1 == col2) {
        addMatrices(matrix1, matrix2, result, row1, col1);
        printf("\nMatrix Addition Result:\n");
        displayMatrix(result, row1, col1);
    } else {
        printf("\nMatrix Addition not possible. The dimensions must be the same.\n");
    }

    if (row1 == row2 && col1 == col2) {
        subtractMatrices(matrix1, matrix2, result, row1, col1);
        printf("\nMatrix Subtraction Result:\n");
        displayMatrix(result, row1, col1);
    } else {
        printf("\nMatrix Subtraction not possible. The dimensions must be the same.\n");
    }

    if (col1 == row2) {
        multiplyMatrices(matrix1, matrix2, result, row1, col1, row2, col2);
        printf("\nMatrix Multiplication Result:\n");
        displayMatrix(result, row1, col2);
    } else {
        printf("\nMatrix Multiplication not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
    }

    printf("\nTranspose of Matrix 1:\n");
    transposeMatrix(matrix1, result, row1, col1);
    displayMatrix(result, col1, row1);

    printf("\nTranspose of Matrix 2:\n");
    transposeMatrix(matrix2, result, row2, col2);
    displayMatrix(result, col2, row2);
    return 0;
}
