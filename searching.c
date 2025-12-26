#include <stdio.h>
#define Max 5

int main(){
    int number[Max], key, i, flag=0;
    for(i=0;i<Max;i++){
        printf("\n Enter the %d th elements of array: ",i+1);
        scanf("%d",&number[i]);

    }

    printf("\n Enter the key elements:");
    scanf("%d",&key);
    for(i=0;i<Max;i++){
        if(key==number[i]){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
        
    }
    if(flag==1)
        printf("\n%d was found at position %d", key, i+1);
        else
        printf("\n%d wad not found",key);
    return 0;
}