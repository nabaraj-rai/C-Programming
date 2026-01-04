#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char x[]="Happy New Year 2026!!";
    char y[50],z[50];
    printf("Original String: %s\n",x);
    strcpy(y,x);
    strcpy(z,y);
    printf("Copied string: %s\n",y);
    printf("Copied string: %s\n",z);
    return 0;
}