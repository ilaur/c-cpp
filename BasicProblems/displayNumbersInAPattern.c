/**
For a natural number n read from the keyboard display n*n like so:
1 2 3 ... n
2 3 4 ... n+1
3 4 5 ... n+2
......
n n+1 n+2 ... 2n-1
*/

#include <stdio.h>

int main() {
    printf("Please input a natural number n : ");
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            printf("%d ", i+j-1);
        }
        printf("\n");
    }
    return 0;
}
