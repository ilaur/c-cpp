/**
Read a n natural odd number. Display the fist n sets of consecutive numbers that have the sum divisible with n.
Example:
For n=3 display sets
1 2
4 5
7 8
*/

#include <stdio.h>

int main() {
    printf("Please input an odd number n : ");
    int n; scanf("%d", &n);
    if(n%2==0)
        return 0;
    else {
        int i, j=1;
        for(i=1; i<=n; i++) {
            while((2*j+1)%n!=0)
                j++;
            printf("%d %d\n", j, j+1);
            j++;
        }
    }
    return 0;
}
