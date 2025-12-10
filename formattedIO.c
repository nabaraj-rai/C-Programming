#include <stdio.h>

int main(){
    int day, year;
    char month[20];

    printf("Enter your Date of Birth:\n");
    printf("Day:\t ");
    scanf("%d", &day);

    printf("Month:\t ");
    scanf("%19s", month);  // no & needed

    printf("Year:\t ");
    scanf("%d", &year);

    printf("Your birth day is on %d, %s, %d.", day, month, year);

    return 0;
}
