#include <stdio.h>

int main(){
    int x=10, *p=&x;
    
    // %u is a unsigned decimal integer, it doesn't take negative integer.

    printf("\n The address of x is: %u",&x);
    printf("\n The address of x(value of p or address pointed by p) is %u", p);
    printf("\n The value of x is: %d",x);
    printf("\n The value of x (value pointed by p) is:%u",*p);
    printf("\n The address of p is:%u", &p);
return 0;
}