/*
Read a vector of numbers of mostly 9 elements.
Display on separate rows circular permutations of the vector.
Example: For vector 1 2 5 4 display:
3 5 4 1 
5 4 1 3
4 1 3 5
1 3 5 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initVector(int* a, int size);
void printCircular(int* a, int size);

int main() {
	int n;
	printf("Please enter number of elements : ");
	scanf("%d", &n);
	if(n>9 || n<1)
		return 0;
	int *a = (int*)malloc((int)sizeof(int)*n);
	initVector(a, n);
	printCircular(a, n);
	free(a);
	return 0;
}

void initVector(int* a, int size) {
	puts("Please enter elements: ");
	int i;
	for(i=0; i<size; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void printCircular(int* a, int size) {
	int i, j;
	for(i=0; i<size; i++) {
		for(j=i+1; j<size; j++) printf("%d ", a[j]);
		for(j=0; j<=i; j++) printf("%d ", a[j]);
		printf("\n");
	}
}