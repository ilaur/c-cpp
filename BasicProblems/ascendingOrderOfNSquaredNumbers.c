 /**
Read a n natural number.
Display in ascending order numbers from 1 to n squared on n rows with n numbers each.
Example:
For n=4 display
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
 */

#include <stdio.h>

int main() {
    printf("Please input a n natural number : ");
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n*n; ++i) {
        printf("%d ", i);
        if(i%n==0) printf("\n");
    }
    return 0;
}
