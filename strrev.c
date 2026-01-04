#include<stdio.h>
#include<string.h>

int main(){
    char x[50];
    printf("Enter a string: \n");
    scanf("%s",x);
    strrev(x);
    printf("String after strrev : %s\n",x);
    return 0;
}