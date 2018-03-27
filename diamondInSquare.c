/**
Read a number n from the keyboard of 2-digits max.
Display a diamond with a side length of n with the * symbol.
Display a square frame with the # symbol of 2n-1 side lenght.
*/

# include <stdio.h>

int main() {
    printf("Please enter a 2-digit number : ");
    int n;
    scanf("%d", &n);
    printf("\n\n");
    /// top side
    int i;
    for(i=0; i<n; ++i) {
        printf("\t");
        int j;
        for(j=1; j<n-i; ++j) printf("#");
        for(; j<=n+i; ++j) printf("*");
        for(; j<=2*n-1; ++j) printf("#");
        printf("\n");
    }
    /// bottom side
    for(i-=2; i>=0; --i) {
        printf("\t");
        int j;
        for(j=1; j<n-i; ++j) printf("#");
        for(; j<=n+i; ++j) printf("*");
        for(; j<=2*n-1; ++j) printf("#");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
