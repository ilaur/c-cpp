/**
Display all natural numbers of form abba which are divisible with a n natural number read from the keyboard.
Form the numbers abba algorithm:
Start with ab number
Multiply by 10 -> ab0
Add remainder of b = ab%10 -> abb
Multiply by 10 -> abb0
Add division of a = ab/10 -> abba
*/

#include <stdio.h>

int main() {
    printf("Please input n : ");
    int n, i, x;
    scanf("%d", &n);
    for(i=10; i<=99; i++) {
        x=(i*10+i%10)*10+i/10;
        if(x%n==0) printf("%d ", x);
    }
    return 0;
}
