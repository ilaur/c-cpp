/*
Read a vector a with n natural elements. Determine if the vector a is a permutation of the set {1, 2, ..., n}.
Example: vector 4 3 2 5 1 is a permutation of the set 1 2 3 4 5, but vector 4 2 1 5 5 is not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPermutation(int *vec, int size);

void main() {
	FILE *pIn = fopen("f.in", "r");
	int n, i;
	fscanf(pIn, "%d", &n);
	int *a = (int*)malloc((n+1)*sizeof(int));
	for(i=1; i<=n; i++)
		fscanf(pIn, "%d", &a[i]);
	fclose(pIn);
	isPermutation(a, n) ? printf("Yes\n") : printf("No\n");
	free(a);
}

bool isPermutation(int *vec, int size) {
	int i;
	int *b = (int*)malloc((size+1)*sizeof(int));
	for(i=1; i<=size; i++)
		b[i] = 0;
	for(i=1; i<=size; i++)
		if(vec[i]<=size)
			b[vec[i]]++;
		else
			return false;
	for(i=1; i<=size; i++)
		if(b[i]!=1)
			break;
	free(b);
	if(i == size+1) 
		return true; 
	return false;
}