#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX], rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("\nLower Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", (i >= j) ? matrix[i][j] : 0);
        printf("\n");
    }

    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", (i <= j) ? matrix[i][j] : 0);
        printf("\n");
    }

    return 0;
}

