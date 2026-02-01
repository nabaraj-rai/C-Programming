#include<stdio.h>

int main(){
     int x=10;
     int *p;
     int **q;
     p=&x;
     printf("Value of x=%d",x);
     printf("\n Address of x=%u", &x);
     printf("\n Value of x=%d",*p);
     printf("\nAddress of x (or Value of p)=%u",p);
     printf("\nAddress of p=%u",&p);
     q=&p;
     printf("\nValue of x=%d",**q);
     printf("\nAddress of x=%u",*q);
     printf("\nAdddress of p=%u",q);
    return 0;
}