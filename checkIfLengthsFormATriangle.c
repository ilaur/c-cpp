/**
Using the conditional operator check if 3 real number lengths a,b,c can be edges of a triangle.
algorithm :
The triangle inequallity states that the sum of 2 lengths must be grated than the 3rd length to form a triangle.
a + b > c
c + b > a
c + a > b
*/

#include <stdio.h>

int main() {
    printf("Please input the 3 lengths : ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    a<b+c && b<a+c && c<a+b ? printf("Yes") : printf("No");
    return 0;
}
