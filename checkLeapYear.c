/**
Read a integer number that is a year.
Check if it is a leap year or not
*/

#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);

int main() {
    printf("Please enter a year y : ");
    int y;
    scanf("%d", &y);
    isLeapYear(y) ? printf("%d is a leap year\n", y) : printf("%d is not a leap year\n", y);
    return 0;
}

bool isLeapYear(int year) {
    return year%4==0 ? year%100==0 && year%400!=0 ? false : true : false;
}
