/**
2 digit number-n.
Display n numbers in a diamond pattern from 1 to n on each row.
*/

#include <stdio.h>

int main() {
    printf("Please input a number of two digits : ");
    int num;scanf("%d", &num);
    int side=0;
    int i;
    printf("\n\n\n");
    for(i=1; i<=num; ++i, ++side) {
        int j=1;
        while(j<num-side) {
            printf(" ");
            ++j;
        }
        while(j>=num-side && j<=num+side) {
            printf("%d", i);
            ++j;
        }
        printf("\n");
    }
    side-=2;
    for(i=num-1; i>=1; --i, --side) {
        int j=1;
        while(j<num-side) {
            printf(" ");
            ++j;
        }
        while(j>=num-side && j<=num+side) {
            printf("%d", i);
            ++j;
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
