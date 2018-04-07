/**
Read a n natural number from the keyboard.
Display n triangles.
Example for n=3.
1
2
2 2
3
3 3
3 3 3
*/

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Please input n the number of triangles : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        for(j=1; j<=i; j++) {
            for(k=1; k<=j; k++)
                printf("%d ", i);
            printf("\n");
        }
    return 0;
}
