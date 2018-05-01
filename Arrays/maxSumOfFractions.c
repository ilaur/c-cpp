/*
Read a number n and a vector of length 2*n natural number elements.
Build n fractions using the elements of the vector so that the sum of the fractions is maximum.
The elements must used once each.
Example: n = 3 and the vector 3 2 4 7 8 6, the fractions for the maximum sum are 8/2 7/3 6/4. 
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r"), *pOut = NULL;
	int n, i, j, aux;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc((2*n)*sizeof(int));
	for(i=0; i<2*n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=0; i<2*n-1; i++) 
		for(j=0; j<2*n-i-1; j++)
			if(a[j]>a[j+1]) {
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
	pOut = fopen("f.out", "w");
	fputs("The fractions for the max sum are :\n", pOut);
	for(i=0; i<n; i++)
		fprintf(pOut, "%d/%d ", a[2*n-i-1], a[i]);
	fclose(pOut);
	free(a);
}