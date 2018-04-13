/**
Read natural numbers from the keyboard until 0 is entered.
Display the average of the entered numbers.
*/

#include <stdio.h>

int main() {
    int m, sum=0, n=-1;
    printf("Please enter m numbers and end with 0 :\n");
    do {
        scanf("%d", &m);
        sum += m;
        n++;
    } while(m!=0);
    printf("The average is : %d", sum/n);
    return 0;
}
