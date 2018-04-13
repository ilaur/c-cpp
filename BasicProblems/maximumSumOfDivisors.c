/**
Read n natural numbers;
Display the number that has the sum of divisors maximum.
*/

#include <stdio.h>

int main() {
    int n, maxNum=0, sum=0, maxSum=0;
    puts("Please input numbers and end with 0 : ");
    do {
        scanf("%d", &n);
        int i;
        sum = 0;
        for(i=1; i<=n; i++)
            if(n%i==0) {
                sum+=i;
        }
        if(sum>maxSum) {
            maxSum = sum;
            maxNum = n;
        }
    } while(n!=0);
    printf("The number with the maximum sum of his divisors is : %d", maxNum);
    return 0;
}
