/**
Explicit conversions.
Read a charcter a.
Display his ASCII code.
Read a natural number c in range [32,127].
Display that character from the ASCII c.
*/

#include <stdio.h>

int main() {
    printf("Please enter a character : ");
    char c;
    int n;
    scanf("%c", &c);
    printf("%d", c);
    printf("\nPlease enter a number :  ");
    scanf("%d", &n);
    printf("%c", n);
    return 0;
}
