/*
Read a vector a with n elements natural numbers.
Remove a minmum number of elements from the vector so that the remaining elements are ordered ascending.
The first element from the vector will not be eliminated.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, j;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=1; i<n; i++) {
		if(a[i]<=a[i-1]) {
			for(j=i; j<n; j++)
				a[j] = a[j+1];
			i--;
			n--;
		}
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	puts("");
	free(a);
	return 0;
}