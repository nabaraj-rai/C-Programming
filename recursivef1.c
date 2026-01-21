#include <stdio.h>
long fact(int);

int main(){
    int a;
    printf("\nEnter the number: ");
    scanf("%d",&a);
    printf("\n The factorial of the %d is %1d",a,fact(a));
    return 0;
}

long fact(int n){
    if(n==0)
    return 1;
    else
    return(n*fact(n-1));
}