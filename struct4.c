#include<stdio.h>
 void display(struct employee e);
 struct employee{
        char name[20];
        int id;
        float salary;
    }emp;

int main(){
    
    printf("Employee name:\t");
    scanf("%s",emp.name);
    printf("\nEmployee id:\t");
    scanf("%d",&emp.id);
    printf("\nEnter salary of Employee:\t");
    scanf("%f",&emp.salary);
    display(emp);
    printf("\n\n\nAfter function call\n");
    printf('\nName\t\t\tID\t\tSalary\n');
    printf("%s \t\t\t %d \t %.2f",emp.name,emp.id,emp.salary);
    return 0;
}

void display(struct employee e){
    printf("\nName\t\tID\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f",e.name,e.id,e.salary);
    strcat(e.name," Ramesh");
    e.id=e.id+100;
    e.salary=e.salary+500;
}