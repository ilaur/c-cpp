/**
Using the conditional operator, calculate how many bottles of x liters each are needed for filling an object of y liters.
Examples :
x=4 and y=20 , then 5 bottles are needed
x=4 and y=23 , then de 6 bottles are needed
*/

#include <stdio.h>

int main() {
    printf("Input number x of bottles and volume of the vase y : ");
    int x, y;
    scanf("%d %d", &x, &y);
    y % x == 0 ? printf("%d bottles are needed", y/x) : printf("%d bottles are needed", y/x+1);
    return 0;
}
