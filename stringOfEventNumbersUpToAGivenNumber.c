/**
Read a natural number n with 4 digits at most.
Display in ascending order all the natural even numbers as long as thier sum doesn't go over n.
Example:
For n=15 display 2 4 6
*/

#include <stdio.h>

int main() {
    printf("Please input a natural number up to 4 digits : ");
    unsigned n, sum=2, i=2;
    scanf("%u", &n);
    while(sum<=n) {
        printf("%d ", i);
        i+=2;
        sum+=i;
    }
    return 0;
}
