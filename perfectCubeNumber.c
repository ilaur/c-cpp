/**
Read a ntural number n.
Determine if that number is a perfect cube
*/

#include <stdio.h>
#include <math.h>

int main() {
    printf("Please input a natural number : ");
    unsigned n; scanf("%u", &n);
    float x = pow(n, 1/3.0);
    x==floor(x) ? printf("Yes") : printf("No");
    return 0;
}
