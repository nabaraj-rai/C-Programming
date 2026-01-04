#include<stdio.h>
#include<string.h>

int main(){
    char x[50];
    printf("Enter your first name: \n");
    scanf("%s",x);
    printf("Your name in Uppercase: %s.\n",strupr(x));
    printf("Your name in Lowercase: %s.",strlwr(x));

    return 0;
}