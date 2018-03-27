/**
Read from the keyboard a 2-digit number n.
Display on the screen a straight triangle pattern with the * symbol and mirror it after.
*/

#include <stdio.h>

int main() {
    printf("Please enter a 2-digit number : ");
    int n;
    scanf("%d", &n);
    printf("\n\n");
    int i;
    for(i=0; i<n; ++i) {
        int j;
        for(j=1; j<n-i; ++j) printf(" ");
        for(; j<=n; ++j) printf("*");
        printf("\n");
    }
    for(i=0; i<n; ++i) {
        int j;
        for(j=1; j<=n; ++j) printf(" ");
        for(; j<=2*n-i; ++j) printf("*");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
