/*
Read a nXm matrix with integer numbers.
Order asceinding elements from the first row by interchanging columns.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *pIn = NULL, *pOut = NULL;
	pIn = fopen("f.in", "r");
	int n, m, i, j, k;
	fscanf(pIn, "%d %d", &n, &m);
	int **mat = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++)
		mat[i] = (int*)malloc(m*sizeof(int));
	for(i=0; i<n; i++) 
		for(j=0; j<m; j++)
			fscanf(pIn, "%d", &mat[i][j]);
	for(i=0; i<m; i++) {
		for(j=i+1; j<m; j++) {
			if(mat[0][i]>mat[0][j]) {
				for(k=0; k<n; k++) {
					int aux = mat[k][i];
					mat[k][i] = mat[k][j];
					mat[k][j] = aux;
				}
			}
		}
	}
	pOut = fopen("f.out", "w");
	for(i=0; i<n; i++) {
		fprintf(pOut, "\n");
		for(j=0; j<m; j++)
			fprintf(pOut, "%d ", mat[i][j]);
	}
	for(i=0; i<n; i++)
		free(mat[i]);
	free(mat);
	fclose(pOut);
	fclose(pIn);
	return 0;
}