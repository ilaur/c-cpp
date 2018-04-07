/**
Read a natural values s, the sum of money, 3 values a, b and c values of three types of bills.
Display on separate row all the possible ways to pay the sum using the given bills.
Example:
s=100, a=5, b=10, c=50
one possible decomposition 6 of 5, 2 of 10, 1 of 50
*/

#include <stdio.h>

int main() {
    printf("Please input the sum s and the three types of bills a, b, c : ");
    int s, a, b, c, i, j, k;
    scanf("%d %d %d %d", &s, &a, &b, &c);
    for(i=0; i<=s/a; i++)
        for(j=0; j<=s/b; j++)
            for(k=0; k<=s/c; k++)
                if(i*a+j*b+k*c==s)
                    printf("%d of %d + %d of %d + %d of %d\n", i, a, j, b, k, c);
    return 0;
}
