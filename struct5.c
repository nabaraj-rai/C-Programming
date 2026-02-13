#include <stdio.h>
#include <string.h>

struct employee{
    char name[50];   // increased size to avoid overflow
    int id;
    float salary;
};

void display(struct employee *e);

int main(){
    struct employee emp;

    printf("Employee name: ");
    scanf("%s", emp.name);

    printf("Employee id: ");
    scanf("%d", &emp.id);

    printf("Enter salary of employee: ");
    scanf("%f", &emp.salary);

    display(&emp);

    printf("\n\nAfter function call\n");
    printf("\nName\t\tID\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f", emp.name, emp.id, emp.salary);

    return 0;
}

void display(struct employee *e){
    printf("\nName\t\tID\t\tSalary\n");
    printf("%s\t\t%d\t\t%.2f", e->name, e->id, e->salary);

    strcat(e->name, " Ramesh");
    e->id += 100;
    e->salary += 500;
}
