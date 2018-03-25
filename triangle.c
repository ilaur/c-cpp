/**
Get input for a 2 digit number.
Display on the screen a triangle formed of * symbols.
*/

#include <stdio.h>

int main() {
    printf("Please input a number of two digits : ");
    int num;scanf("%d", &num);
    int i;
    for(i=0; i<num+1; ++i){
        int j;
        for(j=0; j<num-i; ++j) printf(" ");
        for(++j; j<num+i; ++j) printf("*");
        printf("\n");
    }
    return 0;
}
