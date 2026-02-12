#include<stdio.h>
 void display(char[],int,float);
int main(){
    struct employee{
        char name[20];
        int id;
        float salary;
    }emp;
    printf("Employee name:\t");
    scanf("%s",emp.name);
    printf("\nEmployee id:\t");
    scanf("%d",&emp.id);
    printf("\nEnter salary of Employee:\t");
    scanf("%f",&emp.salary);
    display(emp.name,emp.id,emp.salary);
    printf("%s \t\t\t %d \t %.2f",emp.name,emp.id,emp.salary);
    return 0;
}

void display(char e[],int id, float sal){
    printf("\nName\t\tID\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f",e,id,sal);
    strcat(e," Ramesh");
    id=id+100;
    sal=sal+500;
}