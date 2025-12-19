#include<stdio.h>
#include<string.h>

int main(){
    int marks[5];
    float avg;
    char sub[5][20]={"Maths", "English", "Computer", "Nepali", "Social"};
    int i, sum=0;
    printf("Enter the marks of 5 subjects:\n");

    for(i=0;i<5;i++){
        printf("%s :",sub[i]);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+marks[i];
        
    }
    avg=sum/5;
    printf("Sum of 5 subjects is %d.",sum);
    printf("And their average is %2f.",avg);
    return 0;
}