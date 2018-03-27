/**
Read a number n from the keyboard of 2-digits max.
Display n numbers in a diamond pattern from 1 to n on each row.
*/

#include <stdio.h>

int main() {
    printf("Please input a number of two digits : ");
    int n;
    scanf("%d", &n);
    printf("\n\n");
    /// top side
    int i;
    for(i=1; i<=n; ++i) {
        int j;
        for(j=1; j<=n-i; ++j) printf(" ");
        for(; j<n+i; ++j) printf("%d", i);
        printf("\n");
    }
    /// bottom side
    for(i-=2; i>=1; --i) {
        int j;
        for(j=1; j<=n-i; ++j) printf(" ");
        for(;j<n+i; ++j) printf("%d", i);
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
