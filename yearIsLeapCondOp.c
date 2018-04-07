/**
Using the conditional operator, check if a n year is a leap year or not.
*/

#include <stdio.h>

int main() {
    printf("Please enter a year : ");
    int n;
    scanf("%d", &n);
    n % 4 == 0 ? n % 100 == 0 && n % 400 != 0 ? printf("%d is a not leap year", n) : printf("%d is a leap year", n) : printf("%d is not a leap year", n);
    return 0;
}
