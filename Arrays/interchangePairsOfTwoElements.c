/*
Read a vector a with n natural elements, n must be a even number.
Interchange pairs of two consecutive elements and display the resulting vector.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, aux;
	fscanf(pIn, "%d", &n);
	if(n%2!=0)
		return;
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=0; i<n; i+=2) {
		aux = a[i];
		a[i] = a[i+1];
		a[i+1] = aux;
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
	free(a);
}