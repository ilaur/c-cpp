/**
Write a program that displays the multiplication table from 1 to 10.
*/

#include <stdio.h>

int main() {
    int i, j;
    printf("*");
    for(i=1; i<=10; i++)
        printf("\t%d", i);
    printf("\n");
    for(i=1; i<=10; i++) {
        printf("%d ", i);
        for(j=1; j<=10; j++)
            printf("\t%d", i*j);
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
