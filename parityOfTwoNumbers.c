/**
Read two numbers of 2 digits from the keyboard.
If the two numbers have the same parity display the total even number of digits from the numbers.
If the numbers have diffrent parities display the total odd number of digits from the numbers.
Examples:
a = 78, b = 18 display 2 (8 and 8 are even, so 2).
a = 36, b= 55 display 3 (3 odd digits, 3, 5, 5).
*/

#include <stdio.h>

int main() {
    printf("Please enter two numbers with 2-digits each : ");
    int a, b;
    scanf("%d %d", &a, &b);
    int total = 0;
    /// same parity
    if(a%2 == b%2) {
        a%2==0 ? ++total : 0;
        b%2==0 ? ++total : 0;
        a/10%2==0 ? ++total :0;
        b/10%2==0 ? ++total : 0;
        printf("Total of even : %d", total);
    }
    /// diffrent parity
    else {
        a%2!=0 ? ++total : 0;
        b%2!=0 ? ++total : 0;
        a/10%2!=0 ? ++total :0;
        b/10%2!=0 ? ++total : 0;
        printf("Total of odd : %d", total);
    }
    return 0;
}
