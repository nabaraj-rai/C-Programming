#include <stdio.h>
int add(int,int);

int main(){
    int a = 34, b=23, sum;
    sum = add(a,b);
    printf("The sum is: %d", sum);
    return 0;
}

int add(int a, int b){

 return a+b;
}