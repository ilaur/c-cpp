/**
Read two angles from the keyboard degrees, minutes and number to add.
Add degrees for each angles.
Display the bigger angle and his ??id?? 1 or 2.
Input data: Read from the keyboard g1 m1 x1 and g2 m2 x2 number of degrees, minutes and number of minutes to add for each angle.
Output data: Display h, m si ind of the biggest number degrees, minutes and id.
Example:
57 20 28
76 50 47
Display: 77 37 2
*/

#include <stdio.h>

struct angle {
    int id;
    int degrees;
    int minutes;
};

struct angle addToAngle(struct angle ang, int numAdd);

int main() {
    printf("Please enter the first angle 1 (degrees, minutes and number to add) : ");
    struct angle firstAngle, secondAngle;
    firstAngle.id = 1; secondAngle.id = 2;
    int numToAdd1 = 0, numToAdd2 = 0;
    scanf("%d %d %d", &firstAngle.degrees, &firstAngle.minutes, &numToAdd1);
    printf("Please enter the second angle 2 (degrees, minutes and number to add) : ");
    scanf("%d %d %d", &secondAngle.degrees, &secondAngle.minutes, &numToAdd2);
    firstAngle = addToAngle(firstAngle, numToAdd1);
    secondAngle = addToAngle(secondAngle, numToAdd2);
    if(firstAngle.degrees > secondAngle.degrees)
        printf("\n\t%d %d %d", firstAngle.degrees, firstAngle.minutes, firstAngle.id);
    else
        printf("\n\t%d %d %d\n\n", secondAngle.degrees, secondAngle.minutes, secondAngle.id);
    return 0;
}

struct angle addToAngle(struct angle ang, int numAdd) {
    ang.minutes += numAdd;
    while(ang.minutes > 59) {
        ang.minutes -= 60;
        ang.degrees++;
    }
    return ang;
}
