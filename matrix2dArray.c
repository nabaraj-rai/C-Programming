#include <stdio.h>
#define M 2
#define N 4

int main(){
    
    int matrix[M][N],matrix2[M][N],i,j;
    int sum[i][j];
    printf("\nEnter the fist matrix elements:\t");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe first matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the second matrix elements:\t");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\nThe second matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            sum[i][j]=matrix[i][j]+matrix2[i][j];
        }
    }
    printf("\nThe sum of 2 matrix is:\n");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}