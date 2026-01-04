#include <stdio.h>

int main(){
    char name[30];
    printf("Enter your Name: \n");
    scanf("%s[^\n]",name);
    printf("\nYour Full name is %s", name);
    return 0;
}