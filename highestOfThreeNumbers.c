/**
Read 3 integer numbers.
Display the highest number.
*/

#include <stdio.h>

int main() {
    printf("Please input three numbers a, b and c : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    a>b && a>c ? printf("%d", a) : b>c ? printf("%d", b) : printf("%d", c);
    return 0;
}
