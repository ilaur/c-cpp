/**
Read a natural number k from the keyboard.
Find all the sets of x and y numbers with the property x^x-y*y=k.
Example:
For k=15 there are 2 sets (8,7) and (4,1).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Please input a natural number k : ");
    int k, i, j, x, y;
    scanf("%d", &k);
    for(i=1; i<=k; i++) {
        for(j=i+1; j<=k; j++)
            if(k%i==0 && k%j==0) {
                x = (i+j)/2;
                y = (j-i)/2;
                if(x*x-y*y==k) printf(" (%d, %d)", x, y);
            }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
