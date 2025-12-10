#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    char about[200];
};

int main() {
    struct Person p;

    printf("Enter your name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = '\0'; // remove newline

    printf("Enter your age: ");
    scanf("%d", &p.age);
    getchar(); // clear leftover newline

    printf("Describe yourself in one sentence: ");
    fgets(p.about, sizeof(p.about), stdin);
    p.about[strcspn(p.about, "\n")] = '\0';

    printf("\n--- User Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("About: %s\n", p.about);

    return 0;
}
