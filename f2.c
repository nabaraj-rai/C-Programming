#include <stdio.h>
int greatest(int, int, int);

int main(){
    int a, b, c,d;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    printf("Enter 3rd number: \n");
    scanf("%d", &c);
    d=greatest(a,b,c);
    printf("The greatest number is %d.",d);
    return 0;
}

int greatest(int a, int b, int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }

}