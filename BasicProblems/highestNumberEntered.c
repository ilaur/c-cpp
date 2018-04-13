/**
Read n natural numbers from the keyboard until 0 is entered.
Display the highest number entered.
*/

#include <stdio.h>

int main() {
    int n, max=0;
    printf("Please enter n numbers and end with 0 :\n");
    do {
        scanf("%d", &n);
        n > max ? max = n : max;
    } while(n!=0);
    printf("The highest entered number is : %d", max);
    return 0;
}
