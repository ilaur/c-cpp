/*
Two sets a and b with n and m elements read from keyboard.
Determine if a is included in b.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int n, m, i, j;
	printf("First set length : ");
	scanf("%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	puts("Elements : ");
	for(i=0; i<n; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("Second set length : ");
	scanf("%d", &m);
	int *b = (int*)malloc(m*sizeof(int));
	puts("Elements : ");
	for(i=0; i<m; i++) {
		printf("b[%d]: ", i);
		scanf("%d", &b[i]);
	}
	bool isIncluded = false;
	for(i=0; i<n; i++) {
		isIncluded = false;
		for(j=0; j<m; j++) {
			if(a[i]==b[j]) {
				isIncluded = true;
				break;
			}
		}
		if(!isIncluded) {
			printf("a is not included in b\n");
			break;
		}
		if(i+1==n) 
			printf("a is included in b\n");
	}
	free(b);
	free(a);
	return 0;
}