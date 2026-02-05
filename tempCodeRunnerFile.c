#include<stdio.h>
#include<stdlib.h>
#define m 2
#define n 3

int main(){
    int (*a)[n], (*b)[n], (*sum)[n];
    int i,j;
    
    // Allocate memory for matrices
    a = (int (*)[n])malloc(m * sizeof(int[n]));
    b = (int (*)[n])malloc(m * sizeof(int[n]));
    sum = (int (*)[n])malloc(m * sizeof(int[n]));
    
    if(a == NULL || b == NULL || sum == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Input first matrix elements of order %d*%d: \n",m,n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",(*(a+i)+j));
        }
    }
    
    printf("\nThe first matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }

    printf("\nInput second matrix elements of order %d*%d:\n",m,n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",(*(b+i)+j));
        }
    }
    
    printf("\nThe second matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(*(b+i)+j));
        }
        printf("\n");
    }
    
    // Add two matrices
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(*(sum+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    
    printf("\nSum of two matrices is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(*(sum+i)+j));
        }
        printf("\n");
    }
    
    // Free allocated memory
    free(a);
    free(b);
    free(sum);
    
    return 0;
}