#include <stdio.h>
#include <stdlib.h>

int main(){
    int *aptr,i,n;
    printf("\n Specify the size of array: \t");
    scanf("%d",&n);
    aptr=(int *)calloc(n,sizeof(int));
    printf("\nEnter %d numbers one by one:\t",n);
    for(i=0;i<n;i++){
        scanf("%d",&aptr[i]);
    }
    printf("\nThe elements are:");
    for(i=n;i>=0;i--){
        printf("\t%d",aptr[i]);
    }
    free(aptr);
    return 0;
}