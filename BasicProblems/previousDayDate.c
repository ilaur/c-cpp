/**
Read 3 numbers from the keyboard z l a,
is a date in day month year. Display the date of the previous day.
Examples:
4 5 2000 => 3 5 2000
1 2 2000 => 31 1 2000
1 3 1999 => 28 2 1999
*/

#include <stdio.h>

enum month {jan = 1, feb = 2, mar = 3, apr = 4, may = 5, jun = 6, jly = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12};

struct date {
    int day;
    enum month m;
    int year;
};


struct date getPreviousDayDate(struct date current);

int main() {
    printf("\n\tPlease input a date (dd/mm/yyyy) : ");
    struct date dt;
    scanf("%d %d %d", &dt.day, &dt.m, &dt.year);
    dt = getPreviousDayDate(dt);
    printf("\n\tPrevious day date is : %d %d %d\n\n", dt.day, dt.m, dt.year);
    return 0;
}

struct date getPreviousDayDate(struct date current) {
    if(current.day == 1) {
        if(current.m == mar) {
            if(current.year % 4 == 0) {
                if(current.year % 100 == 0 && current.year % 400 == 0)
                    current.day = 29;
            } else
                current.day = 28;
            current.m--;
        }
        else if(current.m == jan) {
            current.day = 31;
            current.m = dec;
            current.year--;
        }
        else if(current.m == feb || current.m == apr || current.m == jun || current.m == aug || current.m == sep || current.m == nov) {
            current.day = 31;
            current.m--;
        } else {
            current.day = 30;
            current.m--;
        }
    } else
        current.day--;
    return current;
}
