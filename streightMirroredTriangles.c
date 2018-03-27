/**
Read a 2-digit number from the keyboard.
Display the * character in a straight triangle pattern with n lenght and then mirror it.
*/

#include <stdio.h>

int main() {
    printf("Please input a 2-digit number : ");
    int n;
    scanf("%d", &n);
    printf("\n\n");
    int i;
    /// triangle
    for(i=0; i<n; ++i) {
        int j;
        for(j=0; j<=i; ++j) printf("*");
        printf("\n");
    }
    /// mirrored down triangle
    for(i=0; i<n; ++i) {
        int j;
        for(j=0; j<n+i; ++j) printf(" ");
        for(; j<2*n; ++j) printf("*");
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
