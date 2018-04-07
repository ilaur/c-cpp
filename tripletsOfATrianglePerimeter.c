/**
Read a natural number p from the keyboard.
Display all triplets of natural numbers that can be lengths of the edges that form a isosceles triangle with the p perimeter.
Examples:
For p=12 we have the triplets:
4 4 4
5 5 2
*/

#include <stdio.h>

void bigO2Solution(int p); //O(n^2)
void bigOSolution(int p); //O(n)

int main() {
    printf("Please enter the perimeter p : ");
    int p;
    scanf("%d", &p);
    //bigO2Solution(p);
    bigOSolution(p);
    return 0;
}

void bigO2Solution(int p) {
    int i, j;
    for(i=1; i<=p/2; i++)
        for(j=1; j<=p/2; j++)
            if(2*i+j==p && 2*i>j)
                printf("%d %d %d\n", i, i, j);
}

/**
Optimization:
or we consider the equation a+b+c=p
we can make c=a
2*a + b = p
b = p-2*a
and we verify b<2*a for the triangle inequality
*/

void bigOSolution(int p) {
    int i, j;
    for(i=1; i<=p/2; i++) {
        j = p-2*i;
        if(j<2*i && j>0)
            printf("%d %d %d\n", i, i, j);
    }
}
