/**
Read a natural number p from the keyboard, perimeter of a triangle.
Display all the triplets of natural numbers which can be lengths of edges that form a triangle with the p perimeter.
Example:
If p=10, the possible solutions are:
2 4 4
3 3 4
*/

#include <stdio.h>

int main() {
    printf("Please enter a perimeter p : ");
    int p, i, j, k;
    scanf("%d", &p);
    for(i=1; i<=p/2; i++) {
        for(j=i; j<=p/2; j++) {
            k=p-i-j;
            if(k>=j && i+j>k) printf("%d %d %d\n", i, j, k);
        }
    }
    return 0;
}
