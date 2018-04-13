/**
Read 3 natural numbers a, b and c from the keyboard, lengths of a triangle.
Calculate the area of the triangle with a, b, c edges.(Heron's Formula)
Heron's formula:
Area = square_root(s*(s-a)*(s-b)*(s-c))
s = (a+b+c)/2
*/

#include <stdio.h>
#include <math.h>

double triangleArea(double a, double b, double c);

int main() {
    printf("Please enter length of the edges a, b, c : ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Area of the triangle is : %.2lf", triangleArea(a, b, c));
    return 0;
}

double triangleArea(double a, double b, double c) {
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
