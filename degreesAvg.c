/**
Get mesurments of two angles displayed in degrees and minutes.
Display the average of the two angles in degress, minutes and seconds.
Examples:
1. 57 20
  55 50
result: 56 35 0
2. 57 21
   55 50
result: 56 35 30
*/

#include <stdio.h>

struct angle {
    int degrees;
    int minutes;
    int seconds;
};

int main() {
    struct angle a, b;
    printf("Enter first angle(degrees, minutes) : ");
    scanf("%d %d", &a.degrees, &a.minutes);
    printf("Enter second angle(degrees, minutes) : ");
    scanf("%d %d", &b.degrees, &b.minutes);
    struct angle result;
    result.seconds = 0;
    result.degrees = 0;
    result.minutes = a.minutes + b.minutes;
    while(result.minutes > 59) {
        result.degrees++;
        result.minutes -= 60;
    }
    result.degrees += a.degrees + b.degrees;
    while(result.degrees > 360) {
        result.degrees -= 360;
    }
    if(result.minutes % 2 != 0)
        result.seconds = 30;
    result.minutes /= 2;
    if(result.degrees % 2 != 0)
        result.minutes += 30;
    result.degrees /= 2;
    printf("The average sum of the two angles is : ");
    printf("\n\n\t%d %d %d\n\n", result.degrees, result.minutes, result.seconds);
    return 0;
}
