/**
Read a number n from the keyboard of 2-digits max.
Display a diamond of side n length with the # character.
*/

#include <stdio.h>

int main() {
    printf("Please enter a 2-digit number : ");
    int n;
    scanf("%d", &n);
    printf("\n\n");
    int i;
    for(i=1; i<=n; ++i) {
        int j;
        for(j=1; j<=n-i; ++j) printf(" ");
        for(j++; j<=n+i; ++j) printf("#");
        printf("\n");
    }
    for(i-=2; i>=1; --i) {
        int j;
        for(j=1; j<=n-i; ++j) printf(" ");
        for(j++; j<=n+i; ++j) printf("#");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
