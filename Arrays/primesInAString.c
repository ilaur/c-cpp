/*
Display prime elements of a string of integer numbers that are given from the keyboard.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
	int n, i, j;
	printf("Please enter string length : ");
	scanf("%d", &n);
	int* str = (int*)malloc((int)sizeof(int)*n);
	puts("Enter elements : ");
	for(i=0; i<n; i++) {
		printf("str[%d]: ", i);
		scanf("%d", &str[i]);
	}
	for(i=0; i<n; i++) {
		bool isPrime = true;
		if(str[i]==1 || str[i]==0)
			isPrime = false;
		for(j=2; j<=sqrt(str[i]); j++)
			if(str[i]%j==0) {
				isPrime = false;
				break;
			}
		if(isPrime)
			printf("%d ", str[i]);
	}
	printf("\n");
	free(str);
	return 0;
}