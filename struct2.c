#include <stdio.h>

struct student {
    char name[30];
    char sub[20];
    char remarks[10];
    float marks;
};

int main() {
    struct student s[3];
    int i;

    printf("Enter Student Name:\n");
    scanf("%s", s[0].name);

    for (i = 0; i < 3; i++) {
        printf("Enter Subject:\n");
        scanf("%s", s[i].sub);

        printf("Enter Marks:\n");
        scanf("%f", &s[i].marks);

        if (s[i].marks < 40)
            strcpy(s[i].remarks, "Fail");
        else
            strcpy(s[i].remarks, "Pass");
    }

    printf("\nResult:\n");
    for (i = 0; i < 3; i++) {
        printf("Subject: %s | Marks: %.2f | %s\n",
               s[i].sub, s[i].marks, s[i].remarks);
    }

    return 0;
}
