/**
Read three natural numbers from the keyboard n, a and b.
Display the first n powers of 2 in the interval [a, b]
If there are less or equal to n powers in the interval display them.
Examples:
For n=2 a=6 b=35 display the values 8 and 16
For n=2 a=24 b=55 diplay the value 32.
*/

#include <stdio.h>

int main() {
    printf("Please enter 3 natural numbers n, a and b : ");
    int n, a, b, p=1, k=0;
    scanf("%d %d %d", &n, &a, &b);
    while(p<=b && k<n) {
        if(p>=a) {
            printf("%d ", p);
            k++;
        }
        p *= 2;
    }
    return 0;
}
