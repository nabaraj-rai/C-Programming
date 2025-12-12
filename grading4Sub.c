#include <stdio.h>

int main(){
    float m1, m2, m3, m4;

    printf("Enter marks of four subjects (separated by spaces): ");
    if (scanf("%f %f %f %f", &m1, &m2, &m3, &m4) != 4) {
        printf("Invalid input. Please enter four numeric marks.\n");
        return 1;
    }

    float sum = m1 + m2 + m3 + m4;
    float percentage = sum / 4.0f;

    const char *grade;
    if (percentage >= 80.0f)
        grade = "A";
    else if (percentage >= 60.0f)
        grade = "B";
    else if (percentage >= 50.0f)
        grade = "C";
    else if (percentage >= 40.0f)
        grade = "D";
    else
        grade = "F";

    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %s\n", grade);

    return 0;
}