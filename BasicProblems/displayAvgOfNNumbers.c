/**
Read from the keyboard natural numbers until 0 is entered. Display the average of the inserted numbers with exactly 2 digits.
Example:
Read the numbers 3 4 12 2 13 444 0
Average  12.5
*/

#include <stdio.h>

int main() {
    int n = 0, sum = 0, num;
    printf("Please enter number and enter 0 for the result :\n");
    do {
        scanf("%d", &num);
        if(num>9 && num<100) {
            sum += num;
            n++;
        }
    }while(num != 0);
    printf("The average is : %.1f", (float)sum/n);
    return 0;
}
