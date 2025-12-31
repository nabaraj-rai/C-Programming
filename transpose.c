#include <stdio.h>

#define M 2
#define N 4

int main() {
    int matrix[M][N], transpose[N][M], i, j;

    printf("Enter the matrix elements:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal matrix:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose logic
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
