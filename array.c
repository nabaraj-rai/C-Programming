#include <stdio.h>

int main(){
    int num[5];
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    printf("The numbers are: ");
    for(int i=0;i<5;i++){
        printf("%d\t",num[i]);
    }

    return 0;
}