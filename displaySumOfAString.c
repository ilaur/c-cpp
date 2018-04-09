/**
Read natural numbers from the keyboard (at least 3) until second previous and pervious numbers sum up to the last number.
Display the sum of all the numbers inputed.
Example:
If we read 3, 5, 2, 4, 6 the read will stop after 6 and the sum will be 20.
*/

#include <stdio.h>

int main() {
    puts("Please input n numbers (at least 3) : ");
    unsigned a, b, c, sum=0;
    scanf("%d %d %d", &a, &b, &c);
    sum=a+b+c;
    while(a+b!=c) {
        a=b;
        b=c;
        scanf("%d", &c);
        sum+=c;
    }
    printf("Sum : %d", sum);
    return 0;
}
