#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int l;
    printf("\nEnter the string: ");
    gets(str);
    l=strlen(str);
    printf("\nLength of Given String : %d",l);
    return 0;
}