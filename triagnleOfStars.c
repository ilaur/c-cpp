/**
Read a number n from the keyboard of 2-digits max.
Display on the screen a triangle formed of * symbols.
*/

#include <stdio.h>

int main() {
    printf("Please input a number of two digits : ");
    int n;
    scanf("%d", &n);
    printf("\n\n");
    int i;
    for(i=0; i<=n; ++i){
        int j;
        for(j=1; j<=n-i; ++j) printf(" ");
        for(; j<n+i; ++j) printf("*");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
