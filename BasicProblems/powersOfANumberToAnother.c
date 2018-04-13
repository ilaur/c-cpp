/**
Read two natural numbers n and p.
Display in asceinding order all the power of n that are less or equal to p.
Example:
For n=4 and p=120 display 1 4 16 64
*/

#include <stdio.h>

int myPow(int num, int exp);

int main() {
    printf("Please input two numbers n and p : ");
    int n, p, i=0;
    scanf("%d %d", &n, &p);
    printf("\n\t");
    do {
        printf("%d ", myPow(n, i));
        i++;
    } while(myPow(n, i) <= p);
    printf("\n\n");
    return 0;
}

int myPow(int num, int exp) {
    if(exp==0)
        return 1;
    else if(exp==1)
        return num;
    return num * myPow(num, exp-1);
}
