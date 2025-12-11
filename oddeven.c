#include <stdio.h>

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Number %d is even. ", num);
    }
    else{
        printf("Number %d is odd. ", num);
    }
    return 0;
}