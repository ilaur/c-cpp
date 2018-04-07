/**
Using the conditional operator, determine if a x value is part of a [a,b] interval. a, b and x are read from the keyboard and the result will be "Yes" or "No"
*/

#include <stdio.h>

int main() {
    printf("Please input a value x, a the start and b the end of a closed interval : ");
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    x>=a && x<=b ? printf("Yes") : printf("No");
    return 0;
}
