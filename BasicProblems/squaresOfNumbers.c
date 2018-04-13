/**
Read a n number from the keyboard. Display n squares on the screen.
Example n=3:
1
2 2
2 2
3 3 3
3 3 3
3 3 3
*/

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Please input n the number of squares : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        for(j=1; j<=i; j++) {
            for(k=1; k<=i; k++)
                printf("%d ", i);
        printf("\n");
    }
    return 0;
}
