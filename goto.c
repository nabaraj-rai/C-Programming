#include <stdio.h>

int main(){
    //  Program to print numbers 1 to 10 using goto statement(without using loop) and label.

    int x=1;
    loop1:
    printf("%d\t",x);
    x++;
    if(x<10)
    goto loop1;
    return 0;
}