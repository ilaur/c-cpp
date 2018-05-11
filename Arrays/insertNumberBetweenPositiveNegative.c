/*
Read a vector a with n integer elements.
Insert between each two consecutive elements of opposite sign the number merged from the absolute value of the two numbers in the order of the vector.
Example: vector 3 -1 65 4 -9 transforms in 3 31 -1 165 65 4 49 -9.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mergeNums(int firstNum, int secondNum);
int getNumOfDigits(int num);

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, j;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int)), *b = NULL;
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=0; i<n; i++) {
		if((a[i]<0 && a[i+1]>0) || (a[i]>0 && a[i+1]<0)) {
			n++;
			b = (int*)realloc(a, n*sizeof(int));
			a = b;
			for(j=n-1; j>i+1; j--)
				a[j] = a[j-1];
			a[i+1] = mergeNums(a[i], a[i+1]);
			i++;
		}
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	free(a);
	free(b);
	puts("");
}

int mergeNums(int firstNum, int secondNum) {
	return abs(firstNum)*pow(10, getNumOfDigits(secondNum)) + abs(secondNum);
}

int getNumOfDigits(int num) {
	int numOfDigits = 1;
	while(num/10>0) {
		num/=10;
		numOfDigits++;
	}
	return numOfDigits;
}