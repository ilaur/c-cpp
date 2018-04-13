/**
Read a natural number from the keyboard.
Find out if the number is a product of two consecutive numbers.
If there is no way print impossible message on the screen.
Examples:
30 = 5*6
20 = 4*5
10 impossible.

algorithm:
n = x*(x+1)
n = x*x + x
n^2 + x - n = 0
d = 1 + 4*n
x1,x2 = (-1 +- sqrt(d))/2
*/

#include <stdio.h>
#include <math.h>

int main() {
    printf("Please input a natural number : ");
    unsigned n, i;
    scanf("%d", &n);
    int d = 1 + 4*n;
    if(sqrt(d)==floor(sqrt(d))) {
        int x = (-1 + sqrt(d))/2;
        printf("\n\t%d = %d*%d\n\n", n, x, x+1);
    }
    else
        printf("\n\t%d impossible\n\n", n);
    return 0;
}
