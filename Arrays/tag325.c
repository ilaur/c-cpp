/*
Read a vector a with n natural elements.
Display the element with the most divisors in the vector.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fIn = fopen("fIn", "r");
	int n, i, j; 
	fscanf(fIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(fIn, "%d", &a[i]);
	fclose(fIn);
	int maxDiv = 0, ind = 0;
	for(i=0; i<n; i++) {
		int numOfDivisors = 0;
		for(j=1; j<=a[i]; j++) {
			if(a[i]%j==0)
				numOfDivisors++;
		}
		if(numOfDivisors>maxDiv) {
			maxDiv = numOfDivisors;
			ind = a[i];
		}
	}
	printf("%d", ind);
	free(a);
	puts("");
	return 0;
}