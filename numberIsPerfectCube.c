/**
Read a number from the keyboard
Determine if it is a perfect cube.
*/

#include <stdio.h>

int main() {
    printf("Please input a number n : ");
    int n, i;
    scanf("%d", &n);
    for(i=1; i*i*i<n; i++);
    i*i*i==n ? printf("%d is a perfect cube", n) : printf("%d is not a perfect cube", n);
    return 0;
}
