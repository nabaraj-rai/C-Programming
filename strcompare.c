#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];
    printf("\nEnter the String1: ");
    gets(str1);
    printf("\nEnter the String2: ");
    gets(str2);
    if(strcmp(str1,str2)==0)
    printf("Two strings are Identical, which are string1 = %s and string2 = %s",str1,str2);
    if(strcmp(str1,str2)<0)
    printf("Two strings are not Identical and string1 = %s is less than string2 = %s",str1,str2);
    if(strcmp(str1,str2)>0)
    printf("Two strings are not Identical and string1 = %s is greater than string2 = %s",str1,str2);
    
    return 0;
}