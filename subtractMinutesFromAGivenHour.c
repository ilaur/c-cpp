/**
Read from the keayboard three natural numbers h, m and x.
h - number of hours is [0,23]
m - number of minutes is [0,59]
x - number of minutes to subtract of max 5 digits
Display the subtracted hour h:m format
Examples:
For h=2 m=30 x=150 display 0:0
For h=2 m=30 x=1440 display 2:30 (the day before)
*/

#include <stdio.h>

int main() {
    printf("Please input the a hour and the number of minutes to subtract (h:m:m) : ");
    int h, m, x;
    scanf("%d %d %d", &h, &m, &x);
    int resultH = (h*60 + m - x)/60;
    int resultM = (h*60 + m - x)%60;
    if(resultM<0) {
        resultM += 60;
        resultH--;
    }
    if(resultH<0)
        resultH = 24 + resultH%24;
    printf("\n\t%d:%d\n\n", resultH, resultM);
    return 0;
}
