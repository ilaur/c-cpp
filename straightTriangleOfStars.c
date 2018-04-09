/**
Read a natural number n from the keyboard. Display on the screen a triangle in the form of :
*
**
***
.....
***...* (n characters *)
*/

#include <stdio.h>

int main() {
    printf("Please input a number n : ");
    unsigned n, i, j; scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
