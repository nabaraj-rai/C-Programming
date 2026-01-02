#include<stdio.h>
#define ROW 4
#define COL 4

int main(){
    int a[ROW][COL],i,j;
    printf("Enter elements of matrix: \n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Original Matrix:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=1;i<ROW;i++){
        for(j=0;j<i;j++){
            a[i][j]=0;
        }
    }

    printf("Upper triangular matrix: \n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}