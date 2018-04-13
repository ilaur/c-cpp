/**
Read two natural numbers from the keyboard y and m.
y is the number of the year and m the month of the year y.
Display how many days does that month have. Take into consideration leap years.
Example:
a=2008
l=2
Result is 29 because february has 29 days in leap years.
*/

#include <stdio.h>
#include <stdbool.h>

bool isLeap(int year);

enum month {jan=1, feb=2, mar=3, apr=4, may=5, jun=6, jul=7, aug=8, sep=9, oct=10, nov=11, dec=12};

int main() {
    printf("Please enter a year y and a month l : ");
    int y;
    enum month m;
    scanf("%d %d", &y, &m);
    switch(m) {
        case jan :
            printf("31 days\n");
            break;
        case feb :
            isLeap(y) ? printf("29 days\n") : printf("28 days\n");
            break;
        case mar :
            printf("31 days\n");
            break;
        case apr :
            printf("30 days\n");
            break;
        case may :
            printf("31 days\n");
            break;
        case jun :
            printf("30 days\n");
            break;
        case jul :
            printf("31 days\n");
            break;
        case aug :
            printf("31 days\n");
            break;
        case sep :
            printf("30 days\n");
            break;
        case oct :
            printf("31 days\n");
            break;
        case nov :
            printf("30 days\n");
            break;
        case dec :
            printf("31 days\n");
            break;
    }
    return 0;
}

bool isLeap(int year) {
    return year%4==0 ? year%100==0 && year%400!=0 ? false : true : false;
}
