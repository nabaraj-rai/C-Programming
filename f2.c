#include <stdio.h>
int greatest(int, int);

int main(){
    int a, b, c;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    c=greatest(a,b);
    printf("The greatest number is %d.",c);
    return 0;
}

int greatest(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }

}