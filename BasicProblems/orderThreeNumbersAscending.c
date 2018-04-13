/**
Read three natural numbers a, b, c.
Display the values in ascending order.
*/

#include <stdio.h>

void swapValues(unsigned* x, unsigned* y);

int main() {
    printf("Please input three numbers a, b and c : ");
    unsigned a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) swapValues(&a, &b);
    if(a>c) swapValues(&a, &c);
    if(b>c) swapValues(&b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}

void swapValues(unsigned* x, unsigned* y) {
    unsigned temp = *x;
    *x = *y;
    *y = temp;
}
