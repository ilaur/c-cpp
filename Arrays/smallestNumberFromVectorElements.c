/*
Read a vector a with n digits. Display the smallest number you can form with all the n digits of the vector a.
Example: If the vector is 4 0 0 2 1 then the smalles number is 10024.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, j, aux, min = 2;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(a[j]>a[j+1]) {
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
	}
	for(i=1; a[0]==0; i++) {
		a[0] = a[i];
		a[i] = 0;
	}
	for(i=0; i<n; i++)
		printf("%d", a[i]);
	printf("\n");
	free(a);
}