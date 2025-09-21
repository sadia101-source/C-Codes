#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX], transpose[MAX][MAX];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    // Compute the transpose
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}

