#include<stdio.h>

int main(){
    int num[100], i, j, n, temp;

    printf("\n How many numbers you want to sort?:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("\n THe nubmers before sorting are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    for(i=0;i<n;i++){
        for(j=i++;j<n;j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\n The numbers in ascending order are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    return 0;
}