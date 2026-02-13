#include <stdio.h>
union student{
    char name[20];
    int roll_no;
    float marks;
};

int main(){
    union student s;
    printf("Enter the name: ");
    gets(s.name);
    printf("Name=%s\t",s.name);
    printf("\nEnter roll no: ");
    scanf("%d",&s.roll_no);
    printf("\nRoll=%d",s.roll_no);
    s.marks=91.5;
    printf("\nMarks=%.2f",s.marks);    
    return 0;
}