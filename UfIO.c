#include <stdio.h>
#include <conio.h>

int main(){
    // Unformatted Input Output

    char gender;
    printf("Enter gender M or F");
    gender = getchar();
    printf("Your gender is: ");
    putchar(gender);
    return 0;
}