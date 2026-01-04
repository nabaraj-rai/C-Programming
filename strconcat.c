#include<stdio.h>
#include<string.h>

int main(){
    char x[20]="Happy";
    char y[]="New Year";
    char z[40]=" ";
    printf("x=%s\ny=%s\n",x,y);
    printf("\nstrcat(x,y)=%s\n",strcat(x,y));
    return 0;
}