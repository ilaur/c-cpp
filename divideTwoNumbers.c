/**
Read two ineger numbers a and b.
If a divides b or b divides a then display the result of dividing the bigger number to the smaller one,
else display the remainder of the division from the bigger number to the smaller one.
*/

#include <stdio.h>

int main() {
    printf("Please enter two integers a and b : ");
    int a, b, min, max;
    scanf("%d %d", &a, &b);
    if(a>b) {
        min = b;
        max = a;
    } else {
        min = a;
        max = b;
    }
    if(a%b==0 || b%a==0)
        printf(" %d ", max/min);
    else
        printf(" %d ", max%min);
    return 0;
}
