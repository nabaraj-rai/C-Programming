#include <stdio.h>

int main(){
    struct employee{
        int id;
        char name[80];
        char sex;
        float salary;
    };
    struct employee e;
    printf("\nEnter data for an employee:");
    printf("\nEnter id:");
    scanf("%d",&e.id);
    printf("\nEnter Employee name: ");
    scanf("%s",e.name);
    printf("\nEnter Employee's gender: ");
    scanf("%s",e.sex);
    printf("\nEnter Employee's Salary: ");
    scanf("%f", &e.salary);

    printf("\n ===The Records of an employee is ===:\n");
    printf("\n Id: %d\t ",e.id);
    printf("\n Name: %s\t ",e.name);
    printf("\n Sex: %s\t ",e.sex);
    printf("\n Salary: %f\t ",e.salary);
    return 0;
}