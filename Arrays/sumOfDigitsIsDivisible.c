/*
Read a string with n elements, integer numbers.
Display elements with the sum of digits divisible with a given p value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getDigitSum(double num);

int main() {
	int i, n, p;
	printf("Please input array length : ");
	scanf("%d", &n);
	int *vec = (int*)malloc((int)sizeof(int)*n);
	puts("Please input string values");
	for(i=0; i<n; i++) {
		printf("vec[%d]: ", i);
		scanf("%d", &vec[i]);
	}
	printf("Please input divisor p : ");
	scanf("%d", &p);
	for(i=0; i<n; i++) {
		if(getDigitSum(vec[i])%p==0)
			printf("%d ", vec[i]);
	}
	printf("\n");
	free(vec);
	return 0;
}

int getDigitSum(double num) {
	// base case
	if(floor(num/10)==0)
		return (int)num % 10;
	return getDigitSum(floor(num/10)) + (int)num % 10;
}