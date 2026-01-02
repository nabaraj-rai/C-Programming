#include <stdio.h>
#define ROW 4
#define COL 4

int main() {
    int a[ROW][COL], upper[ROW][COL], lower[ROW][COL];
    int i, j;

    printf("Enter elements of matrix:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Upper triangular
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            if (i > j)
                upper[i][j] = 0;
            else
                upper[i][j] = a[i][j];
        }
    }

    printf("\nUpper triangular matrix:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d\t", upper[i][j]);
        }
        printf("\n");
    }

    // Lower triangular
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            if (i < j)
                lower[i][j] = 0;
            else
                lower[i][j] = a[i][j];
        }
    }

    printf("\nLower triangular matrix:\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d\t", lower[i][j]);
        }
        printf("\n");
    }

    return 0;
}
