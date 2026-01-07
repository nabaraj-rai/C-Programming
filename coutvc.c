#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[30];
    int v = 0, c = 0, s = 0, cma = 0;
    int i, l;

    printf("Enter a string: ");
    scanf("%s", str);

    l = strlen(str);

    for (i = 0; i < l; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            v++;
        } else if (ch == ',') {
            cma++;
        } else if (ch == ';') {
            s++;
        } else if (ch >= 'a' && ch <= 'z') {
            c++;
        }
    }

    printf("\nVowels: %d", v);
    printf("\nConsonants: %d", c);
    printf("\nCommas: %d", cma);
    printf("\nSemi-colons: %d", s);

    return 0;
}
