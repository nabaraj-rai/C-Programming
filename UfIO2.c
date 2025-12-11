#include <stdio.h>
#include <conio.h>
// Unformatted Input/ Output using getch and getche

int main(){
    char ch1, ch2;

    printf("Enter 1st character: ");
    ch1 = getch();
    printf("\n Enter 2nd character: ");
    ch2 = getche();
    
    printf("\n First character: ");
    putch(ch1);
    printf("\n Second character: ");
    putch(ch2);
    return 0;
}