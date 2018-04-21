/*
Given a nXn square matrix with integer elements.
Calculate the sum of elements adjecent to the main diagonal of the matrix.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, i, j, sum = 0;
	fscanf(pIn, "%d", &n);
	int **mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			fscanf(pIn, "%d", &mat[i][j]);
	fclose(pIn);
	pOut = fopen("f.out", "w");
	for(i=1; i<n; i++)
		sum += mat[i-1][i]+mat[i][i-1];
	fprintf(pOut, "%d ", sum);
	fclose(pOut);
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	return 0;
}