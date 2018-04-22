/*
Read a vector a with n integer elements.
Transform a into a set by removing duplicate elements from the vector.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i, j, k;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]==a[j]) {
				for(k=j; k<n; k++)
					a[k] = a[k+1];
				n--;
				j--;
			}	
		}
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");
	free(a);
}