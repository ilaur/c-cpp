/**
Se citeste un numar natural n cu cel mult 2 cifre.
Afisati pe ecran o figura sub forma de romb formata cu numerele naturale de la 1 la n.
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
