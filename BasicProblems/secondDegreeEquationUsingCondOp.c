/**
Using the conditional operator solve a 2nd degree equation given the integer coefficients from the user.
Second degree form:
a*x^2 + b*x + c = 0
Solution:
delta = b^2 - 4*a*c
delta > 0 x1 != x2 real
delta = 0 x1 = x2
delta < 0 x1 != x2 complex
x1, x2 = (-b +- sqrt(delta))/2
*/

#include <stdio.h>
#include <math.h>

int main() {
    printf("Please input the 3 coefficients : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    long long delta = b*b - 4*a*c;
    delta >= 0 ? printf("x1 = %.2f\nx2 = %.2f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a)) : printf("x1 = %.2f + %.2f*i \nx2 = %.2f - %.2f*i", -b/2, sqrt(abs(delta))/(2*a), -b/2, sqrt(abs(delta))/(2*a));
    return 0;
}
